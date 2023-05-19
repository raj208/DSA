//find square root suing binary search
//Answer should be give decimal of square root, upto given precision

#include<iostream>
using namespace std;

long long int Binary_search(int num)
{
    int start = 0;
    int end = num;
    long long int mid = start + (end - start)/2;  
    long long int ans = -1;  //important
    while (start <= end)
    {
        //we use "long long int" to avoid the constraint limit
        long long int square = mid * mid;
        if (square== num )
        {
            return mid;
        }
        else if (square > num)
        {
            end  = mid - 1;
        }
        else
        {
            start = mid + 1;
            ans =  mid;  //we need to store the value
        }
        mid = start + (end - start)/2;
        
    }
    return ans;  //we cant return mid because it's updating at the end
}

double Squareroot(int tempsol, int precision, int num)
{
    double factor = 1;
    double ans = tempsol; //we need to store the value of Integer square root so that it gets update in algorithm
    for (int  i = 0; i < precision; i++)
    {
        factor = factor/10;
        for (double j = ans; j*j <num ; j = j+factor )  //j start with ans to get updated acc to algo
        {
            ans = j;
        }
        
    }
    return ans;
    
}

int main(){
    int  num,precision;
    cout<<"Enter a number"<<endl;
    cin>>num;
    cout<<"Enter the precison"<<endl;
    cin>>precision;

    // cout<<"Square root of "<<num << " is "<<Binary_search(num)<<endl;
    int tempsol = Binary_search(num);
    cout<<"The answer is " <<Squareroot(tempsol,precision, num)<<endl;

    return 0;
}