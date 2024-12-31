#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int front = -1;
int rear = -1;
int queue[MAX];

int isEmpty()
{
    if (front == -1 || front == rear + 1)
    {
        printf("Queue is empty\n");
        return 1;
    }

    return 0;
}

int isFull()
{
    if (rear == MAX - 1)
    {
        printf("Queue is full\n");
        return 1;
    }
    return 0;
};

void display()
{
    if (isEmpty())
    {
        printf("Empty\n");
        return;
    }

    for (int i = front; i <= rear; i++)
    {
        printf("%d", queue[i]);
    }
};

int dequeue()
{
    int item;
    if (isEmpty())
    {
        printf("queue is empty\n");
        return 0;
    }

    item = queue[front];
    front = front + 1;

    return item;
};

int enqueue(int data)
{

    if (isFull())
    {
        printf("queue is empty\n");
        return 0;
    }

    if (front == -1)
    {
        front = 0;
    }

    rear = rear + 1;
    queue[rear] = data;
};
int peek()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return 0;
    }
    return queue[front];
};

int main()
{

    int data, choice;

    while (1)
    {
        printf("\nEnter 1 for enqueue\n");
        printf("Enter 2 for dequeue\n");
        printf("Enter 3 for display\n");
        printf("Enter 4 for peek\n");
        printf("Enter choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data:");
            scanf("%d", &data);
            enqueue(data);
            break;

        case 2:
            printf("%d", dequeue());
            break;

        case 3:
            display();
            break;

        case 4:
            peek();
            break;

        default:
            printf("Invalid!\n");
            break;
        }
    }
}
