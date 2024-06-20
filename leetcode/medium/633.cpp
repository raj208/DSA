#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

bool sol(int c)
{
    int root = sqrt(c);
    int l = 0;
    int h = root;
    while (l<=h)
    {
        int temp = pow(l,2)+pow(h,2);
        if (temp==c)
        {
            cout<< l <<" "<<h;
            cout<<endl;
            return true;

        }
        else if (temp<c)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    return false;
    
}

int main(){
    int c = 2;
    bool ans = sol(c);
    cout<<ans<<endl;
    return 0;
}