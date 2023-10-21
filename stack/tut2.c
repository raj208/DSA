// menu driven program for stack implementation

#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int *data;
    int top;
    int capacity;
};

void initialize(struct Stack *stack, int capacity) {
    stack->data = (int *)malloc(capacity * sizeof(int)); // Allocate memory for the stack data
    stack->capacity = capacity;
    stack->top = -1;
}

void push(struct Stack *stack, int value) {
    if (stack->top == stack->capacity - 1) {
        printf("Stack overflow\n");
    } else {
        stack->data[++stack->top] = value;
    }
}

void pop(struct Stack *stack) {
    if (stack->top == -1) {
        printf("Stack underflow\n");
    } else {
        stack->top--;
    }
}

int peek(struct Stack *stack) {
    if (stack->top == -1) {
        printf("Stack is empty\n");
        return -1; // Add a return value to handle the empty stack case
    } else {
        return stack->data[stack->top];
    }
}

int main() {
    struct Stack stack; // Declare a struct Stack, not a pointer
    int size;
    printf("Enter the size of the stack\n");
    scanf("%d", &size);

    initialize(&stack, size); // Pass the address of the stack, not a pointer

    while (1) {
        int choice;
        printf("Enter the choices\n");
        printf("1: Push\n");
        printf("2: Pop\n");
        printf("3: Peek\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be inserted in the stack\n");
                int value;
                scanf("%d", &value);
                push(&stack, value); // Pass the address of the stack
                break;

            case 2:
                pop(&stack); // Pass the address of the stack
                break;

            case 3:
                printf("Top of the stack is "); // Pass the address of the stack and print the result
                int n = peek(&stack);
                printf("%d\n",n);
                break;

            default:
                printf("Enter the correct choice\n");
                break;
        }
    }
    free(stack.data); // Free the dynamically allocated memory
    return 0;
}
