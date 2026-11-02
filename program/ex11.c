#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack is full!\n");
        return;
    }

    stack[++top] = value;
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
        return;
    }

    printf("Popped element: %d\n", stack[top--]);
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack elements (top to bottom):\n");

    for (i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    return 0;
}