#include<stdio.h>
#include<stdlib.h>


#define MAX_SIZE 5

struct Circularqueue{
    int data[MAX_SIZE];
    int front,rear;
};

void initilize(struct Circularqueue *queue)
{
    queue->front = -1;
    queue->rear = -1;
}

int isFull(struct Circularqueue *queue)
{
    return ((queue->rear+1)%MAX_SIZE == queue->front);
}

int isEmpty(struct Circularqueue *queue)
{
	return(queue->front = -1);
}

void enque(struct Circularqueue *queue, int value)
{
    if (isFull(queue))
    {
        printf("Queue is full, can't insert\n");
    }
    else
    {
        if (isEmpty(queue))
        {
            queue->rear = 0;
        }
        queue->rear = (queue->rear+1)%MAX_SIZE;
        queue->data[queue->rear] = value;
        printf("Enqueued %d\n", value);
        
    }
}

void deque(struct Circularqueue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty, cannot be deleted \n");
    }
    else if (queue->front == queue->rear)
    {
        queue->front = queue->rear = -1;
    }
    else
    {
        queue->front= (queue->front+1)%MAX_SIZE;
    }
}
