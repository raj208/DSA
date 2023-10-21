
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure for the Queue
struct Queue {
    int items[MAX_SIZE];
    int front;
    int rear;
};

struct Node
{
    int *data;
    struct Node *left;
    struct Node *right;
};


// Function to create an empty queue
void createQueue(struct Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* queue) {
    return (queue->front == -1);
}

// Function to check if the queue is full
int isFull(struct Queue* queue) {
    return (queue->rear == MAX_SIZE - 1);
}

// Function to add an element to the rear of the queue (enqueue)
void enqueue(struct Queue* queue, int value) {
    if (isFull(queue)) {
        // printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (isEmpty(queue)) {
            queue->front = 0;
        }
        queue->rear++;
        queue->items[queue->rear] = value;
        // printf("Enqueued: %d\n", value);
    }
}

// Function to remove an element from the front of the queue (dequeue)
int dequeue(struct Queue* queue) {
    int item;
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1;
    } else {
        item = queue->items[queue->front];
        if (queue->front >= queue->rear) {
            queue->front = -1;
            queue->rear = -1;
        } else {
            queue->front++;
        }
        // printf("Dequeued: %d\n", item);
        return item;
    }
}

// Function to display the elements in the queue
void display(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = queue->front; i <= queue->rear; i++) {
            printf("%d ", queue->items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Queue queue;
    createQueue(&queue);

    int node;
    int i = 2;
    int visited[7]= {0,0,0,0,0,0,0};
    int a[7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,0,1,0,0},
        {1,0,0,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };

    printf("%d ", i);
    visited[i] =1;
    enqueue(&queue, i);
    while (!isEmpty(&queue))
    {
        int node = dequeue(&queue);
        for (int j = 0; j < 7; j++)
        {
            if (a[node][j] == 1 & visited[j] == 0)
            {
                printf("%d ", j);
                visited[j] = 1;
                enqueue(&queue, j);
            }
            
        }
        
        
    }
    printf("\n");

    return 0;
}