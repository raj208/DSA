#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>
// #include<ordered_map>
// #include<queue>
using namespace std;

bool solve(vector<int>&hand, int groupSize)
{
    if (hand.size()%groupSize != 0)
    {
        return false;
    }
    map<int, int> handcount;
    for(int i : hand)
    {
        handcount[i]++;
    }

    while (!handcount.empty())
    {
        int curr = handcount.begin()->first;
        cout<<curr<<"current element"<<endl;
        for (int i = 0; i < groupSize; i++)
        {
            // handcount[curr+i] --> gives the frequency
            if (handcount[curr+i] == 0) 
            {
                return false;
            }
            handcount[curr+i]--;
            if (handcount[curr+i] < 1)
            {
                handcount.erase(curr+i);
            }
            
            
        }
        
    }
    
    return true;
    
}

int main(){
    vector<int>hand = {2,3,4,5,6,7};
    int groupSize = 3;
    bool result =  solve(hand, groupSize);
    cout<<result<<endl;
    return 0;
}