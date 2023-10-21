#include<stdio.h>
#include<stdlib.h>

struct Stack{
	int *data;
	int top;
	int capacity;
};

void initilize(struct Stack *stack, int capacity)
{
	stack -> top = -1;
	stack -> capacity = capacity;
	stack -> data = (int*)malloc(capacity*sizeof(int));
}

void push(struct Stack *stack,int value)
{
	if(stack->top == stack->capacity-1)
	{
		printf("StackOverflow, cannot push elements\n");
	}
	else
	{
		stack->data[++stack->top]= value;
	}
}

int pop(struct Stack *stack)
{
	if(stack->top == -1)
	{
		printf("Stack Underflow\n");
	}

	else
	{
		return stack->data[stack->top--];
	}
}

int peek(struct Stack *stack)
{
	if(stack->top == -1)
	{
		printf("Stack is empty\n");
	}

	else
	{
		return stack->data[stack->top];
	}
}

int main()
{
	struct Stack stack;
	int capacity;
	printf("Enter the size  of stack \n");
	scanf("%d",&capacity);

	initilize(&stack,capacity);
	printf("Enter %d elements into the stack \n",capacity);
	for(int i=0; i<capacity; i++)
	{
		int value;
		scanf("%d",&value);
		push(&stack,value);
	}
	return 0;
}




