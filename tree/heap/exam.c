#include<stdio.h>

#define MAX_HEAP_SIZE 100

int heap[MAX_HEAP_SIZE];
int heapSize = 1;

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
        int temp = heap[current];
        heap[current] = heap[(current-1)/2];
        heap[(current-1)/2] = temp;
        current = (current-1)/2;
        printf("Element inserted %d\n", value);
    }
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
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapfy(arr,n,largest);
    }
}

void display()
{
    for (int i = 0; i < heapSize; i++)
    {
        printf("%d ",heap[i]);
    }
    printf("\n");
    
}

int main()
{
    insertElement(1);
    insertElement(49);
    insertElement(39);
    insertElement(55);
    insertElement(12);
    insertElement(67);
    insertElement(10);
    insertElement(4);
    display();
    return 0;
}
