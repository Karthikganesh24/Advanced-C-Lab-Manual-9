#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue is full!\n");
        return;
    }

    if (front == -1)
        front = 0;

    queue[++rear] = value;
}

void display()
{
    int i;

    if (front == -1 || front > rear)
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements:\n");

    for (i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    return 0;
}