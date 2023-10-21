//stack basic implementation
#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int *data;
    int top;
    int capacity;
};

void initilize(struct Stack *stack, int capacity)
{
    stack->data = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
}

void push(struct Stack *stack, int value)
{
    if (stack->top == stack->capacity-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        stack->data[++stack->top] = value;
    }
}

void pop(struct Stack *stack)
{
    if (stack->top == -1)
    {
        printf(" stack Underflow\n");
    }
    else
    {
        stack->data[stack->top--];
    }
    
}

int peek(struct Stack *stack)
{
    if (stack->top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        return stack->data[stack->top];
    }
}

int main
{
    struct Stack *stack;
    int size;
    printf("Enter the size of stack\n");
    scanf("%d", &size);

    initilize(&stack,capacity);

    
    while (1)
    {
        int choice;
        printf("Enter the choices\n");
        printf("1: push\n");
        printf("2: pop\n");
        printf("3: peek\n");
        scanf("%d", &choice)

        switch (choice)
        {
        case 1:
            printf("Enter the value to be inserted in stack\n");
            int value;
            scanf("%d", &value);
            push(stack, value);
            break;
        
        case 2:
            pop(stack);

        case 3:
            peek(stack)
        
        default:
        printf("Enter the correct choice\n")
            break;
        }
    }
    
}