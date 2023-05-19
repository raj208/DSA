#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the value of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    InsertionSort(arr, size);
    cout << "Sorted array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}