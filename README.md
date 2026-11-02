# EXP NO:11 C PROGRAM TO DISPLAY STACK ELEMENTS USING AN ARRAY.

## Aim:
To write a C program to display stack elements using an array.
## Algorithm:
1.	Include Necessary Header Files
2.	Declare Global Variables
3.	Define the Display Function
4.	Main Function (or Other Relevant Code)
5.	Initialize the stack and top as needed.
6.	Perform stack operations (push, pop, etc.).
7.	Use the display function to visualize the stack's contents
 
## Program:
```
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
```

## Output:

![alt text](output/ex11.png)

## Result:
Thus, the program to display stack elements using an array is verified successfully.
 

# EXP NO:12  PROGRAM TO PUSH THE GIVEN ELEMENT IN TO A STACK USING ARRAY.
## Aim:
To create a C program to push the given element in to a stack using array.
## Algorithm:
1.	Declare global variables for the stack size, top index, and the stack itself.
2.	Define the push function to add a floating-point number to the stack.
3.	Initialize the stack size, top index, and the stack itself.
4.	Call the push function as needed.
 
## Program:
```
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
```

## Output:
![alt text](output/ex12.png)


## Result:
Thus, the program to push the given element in to a stack using array is verified successfully


 
# EXP NO:13 C PROGRAM TO DISPLAY QUEUE ELEMENTS USING ARRAY.
## Aim:
To write a C program to display queue elements using array

## Algorithm:
1.	Declare global variables for the queue, rear, front, and iteration.
2.	Define the display function to print the elements of the queue.
3.	Initialize the queue, rear, and front as needed.
4.	Call the display function and perform other queue operations as needed.
 
## Program:
```
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
```

## Output:
![alt text](output/ex13.png)


## Result:
Thus, the program to display queue elements using array is verified successfully.


 
# EXP NO:14 C PROGRAM TO INSERT ELEMENTS IN QUEUE USING ARRAY.
## Aim:
To write a C program to insert elements in queue using array.

## Algorithm:
1.	Declare global variables for the size, rear, front, and the queue itself.
2.	Define the enqueue function to add a float to the queue.
3.	Initialize the rear, front, and size of the queue as needed.
4.	Call the enqueue function as needed.

## Program:
```
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
```

## Output:

![alt text](output/ex14.png)

## Result:
Thus, the program to insert elements in queue using array is verified successfully.



 
# EXP NO:15 C FUNCTION TO DELETE ELEMENTS IN QUEUE USING ARRAY

## Aim:

To create a function in C that deletes an element from a queue implemented using an array.

## Algorithm:

1.	Check if the Queue is Empty
o	If the front pointer is -1, it means the queue is empty, and there are no elements to delete. Print a message indicating that the queue is empty.
2.	Delete the Front Element
o	If the queue is not empty, the element at the front index is deleted.
o	Increment the front pointer by 1 to remove the element and point to the next element in the queue.
3.	Check if the Queue Becomes Empty After Deletion:
o	After deletion, check if the front pointer has passed the rear pointer (front > rear). If this is true, reset both front and rear to -1, indicating that the queue is now empty.
4.	End the Function.



## Program:
```
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
```

## Output:
![alt text](output/ex15.png)


## Result:
Thus, the function that deletes an element from a queue implemented using an array is verified successfully.