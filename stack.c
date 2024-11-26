#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int stack_arr[MAX];
int top = -1;

int isFull()
{
    if (top == MAX - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}

void push(int data)
{
    if (isFull())
    {
        printf("stack overflow\n");
    }
    top += 1;
    stack_arr[top] = data;
}

int pop()
{
    int item;
    if (isEmpty())
    {
        printf("stack underflow\n");
        return 0;
    }

    item = stack_arr[top];
    top = top - 1;
    return item;
}

int peek()
{
    if (isEmpty())
    {
        printf("stack underflow");
        return 0;
    }
    return stack_arr[top];
}

void display()
{
    if (isEmpty())
    {
        printf("stack is empty\n");
    }

    for (int i = top; i >= 0; i--)
    {
        printf("\n%d\t", stack_arr[i]);
    }
}

int main()
{

    int data, choice;

    while (1)
    {
        printf("\n");
        printf("Enter 1 to push\n");
        printf("Enter 2 to pop\n");
        printf("Enter 3 to peek\n");
        printf("Enter 4 to display\n");
        printf("Enter 5 to exit\n");

        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data:");
            scanf("%d", &data);
            push(data);
            break;

        case 2:
            printf("%d", pop());
            break;

        case 3:

            printf("The top of the stack is:%d", peek());
            break;

        case 4:
            display();
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid Input");
            break;
        }
    }

    return 0;
}