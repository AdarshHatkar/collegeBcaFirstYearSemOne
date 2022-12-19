/*
Implementation of Push and Pop Operation on stack
*/

#include <stdio.h>


void traverseArr(int *, int);
void push(int *, int, int *);
void pop(int *, int, int *);
void main()
{ 
    int arr[5] = {0}, sizeOFArr, top = -1, ii;
    sizeOFArr = sizeof(arr) / sizeof(arr[0]);

startLabel:

    printf("\nSelect an Option\n");
    printf("1.push               2.pop\n");
    printf("3.display            4.exit\n");

    scanf("%d", &ii);
    printf("\033[H\033[J") ;
    // clrscr();

    switch (ii)
    {
    case 1:
        push(&arr, sizeOFArr, &top);
        goto startLabel;
        break;
    case 2:
        pop(&arr, sizeOFArr, &top);
        goto startLabel;
        break;
    case 3:
        traverseArr(&arr, sizeOFArr);
        goto startLabel;
        break;
        case 4:
       
        break;

    default:
        printf("Invalid Option selected \n");
         goto startLabel;
        break;
    }

  
}

void traverseArr(int *arr, int size)
{

    printf("\n arr[%d]={", size);
    for (int i = 0; i < size; i++, arr++)
    {
        if (i != 0)
        {
            printf(",");
        }
        printf("%d", *arr);
    }
    printf("} \n");
}
void push(int *arr, int size, int *top)
{
    int data;
    if (*top == (size - 1))
    {
        printf("\n Error: Stack Overflowed \n");
        return;
    }

    printf("\n Enter New Data \n ");
    scanf("%d", &data);

    *(arr + *top + 1) = data;
    *top = *top + 1;
}
void pop(int *arr, int size, int *top)
{

    if (*top == -1)
    {
        printf("\n Error: Stack Underflowed \n");
        return;
    }

    *(arr + *top) = 0;
    *top = *top - 1;
}