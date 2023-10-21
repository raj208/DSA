//TRANSVERSAL OF TREE FROM SCRATCH USING STACK

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a binary tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Structure to represent a stack
struct StackNode {
    struct TreeNode* node;
    struct StackNode* next;
};

struct Stack {
    struct StackNode* top;
};

// Function to create a new node for the binary tree
struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to create an empty stack
struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}

// Function to push a node onto the stack
void push(struct Stack* stack, struct TreeNode* node) {
    struct StackNode* newNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    newNode->node = node;
    newNode->next = stack->top;
    stack->top = newNode;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}

// Function to pop a node from the stack
struct TreeNode* pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        return NULL;
    }
    struct StackNode* temp = stack->top;
    struct TreeNode* popped = temp->node;
    stack->top = temp->next;
    free(temp);
    return popped;
}

// Function to perform an inorder traversal using a stack
void inorderTraversal(struct TreeNode* root) {
    struct Stack* stack = createStack();
    struct TreeNode* current = root;

    while (current != NULL || !isEmpty(stack)) {
        while (current != NULL) {
            push(stack, current);
            current = current->left;
        }

        current = pop(stack);
        printf("%d ", current->data);

        current = current->right;
    }
}

int main() {
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Inorder traversal of the binary tree: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
