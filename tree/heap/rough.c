#include<stdio.h>

#define MAX_HEAP_SIZE 100

int heap[MAX_HEAP_SIZE];
int heapSize = 0;

void insertElement(int value)
{
    if (heapSize > MAX_HEAP_SIZE)
    {
        printf("Heap is full\n");
    }

    heap[heapSize] = value;
    int current = heapSize;
    heapSize++;

    while (current > 0 && heap[current] > heap [(current -1)/2])
    {
        //swap;
        current = (current-1)/2;
         printf("Element inserted\n");
    }
}

int delete()
{
    if (heapSize <=0)
    {
        printf("Heap is empty\n");
    }

    int max = heap[0];
    heap[0] = heap[heapSize -1];
    heapSize--;
    heapify(heap, heapSize , 0);
    return max;
}

void heapfy(int arr[], int n, int i)
{
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        // swap arri arrlar
        heapfy(arr,n,largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = (n/2) -1; i  >= 0; i--)
    {
        heapfy(arr, n ,i);
    }

    for (int i = n-1; i >=0; i--)
    {
        // swap(arr0, arri)
        heapfy(arr,i,0);
    }
    
    
}