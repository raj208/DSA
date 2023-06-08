#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> v;

    v.push_back(5);
    v.push_back(20);
    v.push_back(130);
    v.push_back(220);
    v.push_back(300);

    //values should be sorted
    cout<<"Finding 22 ->"<<binary_search(v.begin(),v.end(),130)<<endl;
    cout<<"Finding 22 ->"<<binary_search(v.begin(),v.end(),20)<<endl;
    cout<<"Finding 22 ->"<<binary_search(v.begin(),v.end(),220)<<endl;
    cout<<"Finding 22 ->"<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<"Finding 22 ->"<<binary_search(v.begin(),v.end(),300)<<endl;
    cout<<"Finding 22 ->"<<binary_search(v.begin(),v.end(),354)<<endl;

    cout<<"Lower bound ->"<<lower_bound(v.begin(),v.end(),130)-v.begin()<<endl;
    cout<<"Lower bound ->"<<lower_bound(v.begin(),v.end(),300)-v.begin()<<endl;
    cout<<"Lower bound ->"<<lower_bound(v.begin(),v.end(),20)-v.begin()<<endl;
    cout<<"Lower bound ->"<<lower_bound(v.begin(),v.end(),2000)-v.begin()<<endl;
    
    cout<<"upper bound of 130 ->"<<upper_bound(v.begin(),v.end(),130)-v.begin()<<endl;
    cout<<"upper bound of 220 ->"<<upper_bound(v.begin(),v.end(),220)-v.begin()<<endl;
    cout<<"upper bound of 2000 ->"<<upper_bound(v.begin(),v.end(),2000)-v.begin()<<endl;

// ***max/min****
    int a = 45;
    int b = 459;
    cout<<"max -> "<<max(a,b)<<endl;
    cout<<"min -> "<<min(a,b)<<endl;

// ****swap****
    swap(a,b);
    cout<<"a-> "<<a <<" b-> "<<b<<endl;

// *****reverse*******
    string s = "abcd";
    reverse(s.begin(),s.end());
    cout<<"Sritng ->"<<s<<endl;

// *****rotating**********
    vector<int> r;

    r.push_back(1);
    r.push_back(6);
    r.push_back(9);
    r.push_back(11);

    rotate(r.begin(),r.begin()+1,r.end()); //will print value after 1st place
    cout<<"After rotate"<<endl;
    for(int i:r){
        cout<<i<<" ";
    }cout<<endl;
    

    // *******sorting*******
    vector<int> q;

    q.push_back(7);
    q.push_back(2);
    q.push_back(8);
    q.push_back(4);

    sort(q.begin(),q.end());

    for(int i:q){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}