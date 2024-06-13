#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int>m;

//insetion method 1
    pair<string, int>p = make_pair("babbar", 3);;
    m.insert(p);

//insertion method 2
    pair<string, int> p2("raj",10);
    m.insert(p2);

//insertion method 3
    m["akash"] = 1;
    m["raj"] = 2; //updation of 10

    cout<<m["babbar"]<<endl;
    cout<<m.at("akash")<<endl;


    cout<<m["babb22ar"]<<endl; //assign unknown value to zero
    cout<<m.at("babb22ar")<<endl; //out of range

    cout<<m.size();

    cout<<m.count("rohit")<<"count testing "<<endl; //if present --> 1
    cout<<m.count("rohit")<<endl; // if not_present -->0

    m.erase("raj");
    
//PRINTING MAP method 1
    for(auto i:m)
    {
        cout<<i.first <<" " <<i.second<<endl;
    }

//PRINTING MAP method 1
    unordered_map<string, int> :: iterator it = m.begin();

    while (it != m.end())
    {
        cout<< it->first <<" " <<it->second <<endl;
        it++;
    }
    
    return 0;
}