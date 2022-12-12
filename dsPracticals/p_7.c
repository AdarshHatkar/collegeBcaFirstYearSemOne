/*
Implementation of Push and Pop Operation on stack
*/

#include <stdio.h>

void traverseArr(int *, int);
void push(int *, int, int *);
void pop(int *, int, int *);
void main()
{

    int arr[3]={0} , sizeOFArr, top = -1;
    sizeOFArr = sizeof(arr) / sizeof(arr[0]);

  
    printf("\n  initial stack \n top=%d \n",top);

    traverseArr(&arr, sizeOFArr);

    push(&arr,  sizeOFArr, &top);
    push(&arr,  sizeOFArr, &top);
    push(&arr,  sizeOFArr, &top);
     pop(&arr,  sizeOFArr, &top);

    printf("\n after opreations\n top=%d\n",top); 

    traverseArr(&arr, sizeOFArr);
}

void traverseArr(int *arr, int size)
{

    printf("arr[%d]={", size);
    for (int i = 0; i < size; i++, arr++)
    {
        if (i != 0)
        {
            printf(",");
        }
        printf("%d", *arr);
    }
    printf("}");
}
void push(int *arr, int size, int *top)
{
     int data;
    if (*top == (size - 1))
    {
        printf("stack already full cant add more data");
        return;
    }

     
 
   printf("\n Enter New Data \n ");
   scanf("%d",&data);

   *(arr + *top +1)=data;
   *top=*top+1;
}
void pop(int *arr, int size, int *top)
{
    
    if (*top ==  - 1)
    {
        printf("stack is Empty cant Pop");
        return;
    }

     


   *(arr + *top )=0;
   *top=*top-1;
}