#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int top;
    int capacity;
    int *arr;
} Stack;

Stack *createStack(int capacity)
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->arr = (int *)malloc(stack->capacity * sizeof(int)); //이건 뭘까
    return stack;
}

int isFull(Stack *stack)
{
    return stack->top == stack->capacity - 1; //왜 -1을 하는 걸까
}

int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

void push(Stack *stack, int item)
{
    if (isFull(stack))
        return;
    stack->arr[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

int pop(Stack *stack)
{
    // fill this
    if (isEmpty(stack))
        return -9999;
    int temp = stack->arr[stack->top];
    stack->top--;
    return temp;
}

int peek(Stack *stack)
{
    // fill this
    if (isEmpty(stack))
        return -1;
    return stack->arr[stack->top];
}

int main()
{
    Stack *stack = createStack(100);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);

    printf("%d pop from stack\n", pop(stack));
    printf("%d pop from stack\n", pop(stack));

    push(stack, 50);
    printf("%d pop from stack\n", pop(stack));
    printf("%d pop from stack\n", pop(stack));
    printf("%d pop from stack\n", pop(stack));
    printf("%d pop from stack\n", pop(stack));
    return 0;
}