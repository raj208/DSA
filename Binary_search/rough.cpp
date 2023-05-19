// *****WORK IN PROGRESS********
//******DONT CLEAR***********

#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;
    
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];   
        }
        if(studentCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int allocateBooks(int arr[], int n, int m) {
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int  main()
{
    int n,m;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    cout<<"Enter the number of students"<<endl;
    cin>>m;
    
    int arr[n];
    cout<<"Enter the value of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int Index = allocateBooks( arr,  n,  m);
    cout<<"The Answer is "<< Index <<endl;
}