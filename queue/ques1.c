#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 5

struct CircularQueue
{
	int data[MAX_SIZE];
	int front,rear;
}

void initilize(struct CircularQueue *queue)
{
	queue->front = -1;
	queue->rear = -1;
}



int isEmpty(struct CircularQueue *queue)
{
	return(queue->front = -1);
}

int isFull(struct CircularQueue *queue)
{
	return((queue->rear+1)% MAX_SIZE == queue->front);

void enqueue(struct CircularQueue *queue , int value)
{
	if (isFull(queue))
	{
		printf("Queue is Full\n");
	}
	else
	{
		if(isEmpty(queue))
		{
			queue->front = 0;
		}
		queue -> rear = (queue->rear+1)% MAX_SIZE;
		queue -> data[queue->rear] = value;
		printf("Enqueued %d\n", value);
	}
}




