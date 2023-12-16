#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_SIZE 100

int heap[MAX_HEAP_SIZE];
int heapSize = 0;

void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        maxHeapify(arr, n, largest);
    }
}

void insertElement(int value) {
    if (heapSize >= MAX_HEAP_SIZE) {
        printf("Heap is full. Cannot insert more elements.\n");
        return;
    }

    heap[heapSize] = value;
    int current = heapSize;
    heapSize++;

    while (current > 0 && heap[current] > heap[(current - 1) / 2]) {
        int temp = heap[current];
        heap[current] = heap[(current - 1) / 2];
        heap[(current - 1) / 2] = temp;
        current = (current - 1) / 2;
    }

    printf("Element %d inserted into the heap.\n", value);
}

int deleteMax() {
    if (heapSize <= 0) {
        printf("Heap is empty. Cannot delete any element.\n");
        return -1;
    }

    int max = heap[0];
    heap[0] = heap[heapSize - 1];
    heapSize--;
    maxHeapify(heap, heapSize, 0);

    return max;
}

int main() {
    insertElement(10);
    insertElement(30);
    insertElement(20);
    insertElement(5);
    insertElement(15);

    printf("Max Heap: ");
    for (int i = 0; i < heapSize; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");

    int max = deleteMax();
    printf("Max element deleted: %d\n", max);

    printf("Updated Max Heap: ");
    for (int i = 0; i < heapSize; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");

    return 0;
}
