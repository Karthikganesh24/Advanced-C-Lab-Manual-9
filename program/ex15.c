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

void delete()
{
    if (front == -1)
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front]);
    front++;

    if (front > rear)
        front = rear = -1;
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements: ");

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
    delete();
    display();

    return 0;
}