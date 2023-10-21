#include<iostream>
using namespace std;

bool Check(int arr[], int size)
{
	int leftSum=0;
	for(int i=0; i<size/2; i++)
	{
		leftSum += arr[i];
	}

	int rightSum = 0;

	for(int i=size; i>=size/2; i--)
	{
		rightSum += arr[i];
	}

	if(leftSum = rightSum)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	
	cout<<"Enter the value of elements"<<endl;
	int arr[size];
	for(int i=0; i< size; i++)
	{
		cin>>arr[i];
	}

	if(Check(arr,size))
	{
		cout<<"True"<<endl;
	}
	else
	{
		cout<<"False"<<endl;
	}
	return 0;
}


	

