#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;


int main(){
    int size;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;

    set<int>v;
    cout<<"Enter the value of set"<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>v[i];
    // }

    for (int i = 0; i < size; i++)
    {
        int value;
        cout<<"Enter the value"<<endl;
        cin>>value;

        v.insert(value);
    }
    
    int q;
    cout<<"Enter the number of Queries"<<endl;
    cin>>q;
    
    vector<int>query(q);
    cout<<"Enter the to check"<<endl;
    for (int i = 0; i < q; i++)
    {
        cin>>query[i];
    }
    for(int i:query)
    {
        set<int>::iterator itr = v.find(i);  //in vector form we can use binary search 
        if (*itr == 1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<" "<<lower_bound(v.begin())

        }
        
    }

    return 0;
}