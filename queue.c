#include <stdio.h>
#include <process.h>
int front = -1;
int rear = -1;
int queue[50];
void enqueue();
void dequeue();
void display();
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number:");
    while (1)
    {
        printf("\n1: Enqueue\n2: Dequeue\n3: Display\n4: Exit\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong Choice\n");
        }
    }
    return 0;
}
void enqueue()
{
    if (rear == 49)
    {
        printf("Overflow");
    }
    else
    {
        if (rear == -1)
        {
            front++;
            rear++;
        }
        else
        rear++;
        printf("Enter the element:");
        scanf("%d",&queue[rear]);
    }
}
void dequeue()
{
    if (front==-1)
    {
        printf("Underflow");
    }
    else
    {
        printf("The element deleted is %d .",queue[front]);
        front++;
    }
    if (front>rear)
    {
        front=-1;
        rear=-1;
    }
}
void display()
{
    if (front==-1)
    {
        printf("Underflow");
    }
    else
    {
        for (int i = front; i <= rear ; i++)
        {
            printf("%d\n",queue[i]);
        }
        
    }
}
    
    return 0;
}
