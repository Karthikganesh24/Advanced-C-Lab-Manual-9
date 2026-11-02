#include <stdio.h>

#define MAX 5

float stack[MAX];
int top = -1;

void push(float value)
{
    if (top == MAX - 1)
    {
        printf("Stack is full!\n");
    }
    else
    {
        stack[++top] = value;
        printf("%.2f pushed into the stack.\n", value);
    }
}

void display()
{
    int i;

    printf("Stack elements (top to bottom):\n");

    for (i = top; i >= 0; i--)
        printf("%.2f\n", stack[i]);
}

int main()
{
    float value;

    printf("Enter an element to push: ");
    scanf("%f", &value);

    push(value);
    display();

    return 0;
}