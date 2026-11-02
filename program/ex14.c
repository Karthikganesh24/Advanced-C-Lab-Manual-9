#include <stdio.h>

#define MAX 5

float queue[MAX];
int front = -1;
int rear = -1;

void enqueue(float value)
{
    if (rear == MAX - 1)
    {
        printf("Queue is full!\n");
        return;
    }

    if (front == -1)
        front = 0;

    queue[++rear] = value;
    printf("%.2f inserted into the queue.\n", value);
}

void display()
{
    int i;

    printf("Queue elements: ");

    for (i = front; i <= rear; i++)
        printf("%.2f ", queue[i]);

    printf("\n");
}

int main()
{
    int n, i;
    float value;

    printf("Enter number of elements to insert (maximum %d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX)
    {
        printf("Invalid number of elements!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter element: ");
        scanf("%f", &value);
        enqueue(value);
    }

    display();

    return 0;
}