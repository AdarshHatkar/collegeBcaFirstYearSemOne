/*
Implementation of insertion technique in array
*/

#include <stdio.h>
void scanArr(int*,int);
void traverseArr(int*,int);
void insertArr(int*,int);
void main()
{

int arr[7]={1,54,75,48,45},sizeOFArr;
sizeOFArr = sizeof(arr)/sizeof(arr[0]);

// scanArr(&arr,sizeOFArr);
printf("before insertion \n");

traverseArr(&arr,sizeOFArr);

insertArr(&arr,sizeOFArr);

printf("after insertion \n");

traverseArr(&arr,sizeOFArr);
 

    
}
void scanArr(int *arr,int size){

   
   
   for (int i = 0; i < size; i++ ,arr++)
   {
    printf("enter value of arr[%i] \n",i);
    scanf("%d",arr);
   }
   
}
void traverseArr(int *arr,int size){



   
   printf("arr[%d]={",size);
   for (int i = 0; i < size; i++ ,arr++)
   {
    if(i != 0){
        printf(",");
    }
    printf("%d",*arr);
   }
   printf("}");
   
}
void insertArr(int *arr,int size){

   int positionIndex,data;
   labelOne:
   printf("\n Enter Position Index \n ");
   scanf("%d",&positionIndex);

   if(insertArr <0 || insertArr >= size){
     printf("\n\nInvalid Index enter again \n\n ");
     goto labelOne;

   }
      printf("\n Enter data to add at arr[%d] \n ",positionIndex);
   scanf("%d",&data);

   // making space for new data 
   for ( int i = size -1; i > positionIndex; i--)
   {
    int * newArr = arr + i;

    *newArr=*(newArr-1);
   }
      // inserting new data
   *(arr+positionIndex)=data;
   
}