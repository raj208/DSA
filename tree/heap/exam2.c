#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct PriorityQueue {
    int heap[MAX_SIZE];
    int size;
};

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void minHeapify(struct PriorityQueue *pq, int idx) {
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < pq->size && pq->heap[left] < pq->heap[smallest])
        smallest = left;
    if (right < pq->size && pq->heap[right] < pq->heap[smallest])
        smallest = right;

    if (smallest != idx) {
        swap(&pq->heap[idx], &pq->heap[smallest]);
        minHeapify(pq, smallest);
    }
}

struct PriorityQueue* createPriorityQueue() {
    struct PriorityQueue *pq = (struct PriorityQueue*)malloc(sizeof(struct PriorityQueue));
    pq->size = 0;
    return pq;
}

void insert(struct PriorityQueue *pq, int value) {
    if (pq->size >= MAX_SIZE) {
        printf("Queue is full. Cannot insert.\n");
        return;
    }

    int i = pq->size;
    pq->heap[i] = value;
    pq->size++;

    while (i > 0 && pq->heap[(i - 1) / 2] > pq->heap[i]) {
        swap(&pq->heap[i], &pq->heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

int deleteMin(struct PriorityQueue *pq) {
    if (pq->size == 0) {
        printf("Queue is empty. Cannot delete minimum.\n");
        return -1;
    }

    if (pq->size == 1) {
        pq->size--;
        return pq->heap[0];
    }

    int root = pq->heap[0];
    pq->heap[0] = pq->heap[pq->size - 1];
    pq->size--;
    minHeapify(pq, 0);

    return root;
}

void display(struct PriorityQueue *pq) {
    if (pq->size == 0) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Priority Queue: ");
    for (int i = 0; i < pq->size; i++) {
        printf("%d ", pq->heap[i]);
    }
    printf("\n");
}

void print(struct PriorityQueue *pq)
{
    for (int i = 0; i < pq->size ; i++)
    {
        printf("%d ", pq->heap[i] );
    }
    printf("\n");
    
}

int main() {
    struct PriorityQueue *pq = createPriorityQueue();

    insert(pq, 30);
    insert(pq, 20);
    insert(pq, 10);
    insert(pq, 50);
    insert(pq, 40);

    display(pq);
    print(pq);

    printf("Deleted element: %d\n", deleteMin(pq));

    display(pq);
    print(pq);

    // printf("printing in array format\n");

    return 0;
}
