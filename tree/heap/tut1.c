#include<stdio.h>
#include<malloc.h>

struct heap{
    int arr[100];
    int size;
};

void initilize(struct heap *heap){
    heap->arr[0] = -1;
    heap->size = 0;
}

 void swap(int a, int b)
 {
    int t = a;
    a = b;
    b = t;
 }



void insert(struct heap *heap, int val)
{
    heap->size = heap->size+1;
    int index = heap->size;
    heap->arr[index] = val;

    while (index > 1)
    {
        int parent = index/2;

        if (heap->arr[parent] < heap->arr[index])
        {
            swap(heap->arr[parent], heap->arr[index]);
            heap->arr[index] = parent;
        }
        else
        {
            return;
        }
    }
    // printf("first insertion done \n");
}

void display(struct heap *heap)
{
    for (int i = 0; i < heap->size; i++)
    {
        printf("%d",heap->arr[i]);
        printf("\n");
    }
    
}

int main()
{
    struct heap  *root = (struct heap *)malloc(sizeof(struct heap));
    initilize(root);

    insert(root, 53);
    printf(" firts insertion %d \n", root->size);
    insert(root, 79);
    printf("second insertion %d \n", root->size);
    insert(root, 32);
    printf("third insertion %d \n", root->size);
    insert(root, 3);
    printf("fourth insertion %d \n", root->size);
    insert(root, 56);
    printf("fifth insertion %d \n", root->size);

    
    display(root);
}