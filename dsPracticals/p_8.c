/*
Implementation of Insertion and Deletion technique in queue
Note:
1) without using pointer
2) simple queue

*/

#include <stdio.h>
// #include <conio.h>

// declaring queue
int Queue[5] = {0}, sizeOFQueue, front = 0, rear = -1;
sizeOFQueue = sizeof(Queue) / sizeof(Queue[0]);

// declaring functions

// methods
int isFull();
int isEmpty();
// opreations
void display();
void enqueue();
void dequeue();
void main()
{
    int ii;

startLabel:
    printf("\n--------------------------");
    printf("\nSelect an Option\n");
    printf("1.enqueue              2.dequeue\n");
    printf("3.display            4.exit\n");

    scanf("%d", &ii);

    // below line is alternative of clrscr()
    // because vscode dont support clrscr
    printf("\033[H\033[J");
    // clrscr();

    switch (ii)
    {
    case 1:
        enqueue();
        goto startLabel;
        break;
    case 2:
        dequeue();
        goto startLabel;
        break;
    case 3:
        display();
        goto startLabel;
        break;
    case 4:

        break;

    default:
        printf("Invalid Option selected \n Try Again \n");
        goto startLabel;
        break;
    }
}

int isFull()
{
    if (rear == (sizeOFQueue - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty()
{
    if (front < 0 || front > rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display()
{
    if (isEmpty())
    {
        printf("\n Error: Queue is empty\n Nothing to display");
        return;
    }
    printf("\n---Displaying Queue---\n");
     printf("[RearEnd] ");
    for (int i = rear; i >=front; i--)
    {
    
        printf(" %d -> ", Queue[i]);
    }
    printf("[FrontEnd]\n");
}
void enqueue()
{
    int data;
    if (isFull())
    {
        printf("\n Error: Queue Overflowed \n All allocated Memory get used \n we cant reuse them because this is simple queue");
        return;
    }

    printf("\n Enter New Data \n ");
    scanf("%d", &data);
    rear = rear + 1;
    Queue[rear] = data;
    printf("\n Data=%d is added to queue \n ", data);
}
void dequeue()
{
    int data;
    if (isEmpty())
    {
        printf("\n Error: Queue Underflowed \n ");
        return;
    }

    data = Queue[front];
    front = front + 1;

    printf("\n Data=%d is deleted from queue \n ", data);
}
