/*
Implementation of deletion technique in array
*/

#include <stdio.h>
void scanArr(int*,int);
void traverseArr(int*,int);
void deleteArr(int*,int);
void main()
{

int arr[7]={1,54,75,48,45},sizeOFArr;
sizeOFArr = sizeof(arr)/sizeof(arr[0]);

// scanArr(&arr,sizeOFArr);
printf("before deletion \n");

traverseArr(&arr,sizeOFArr);

deleteArr(&arr,sizeOFArr);

printf("after deletion \n");

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
void deleteArr(int *arr,int size){

   int positionIndex;
   labelOne:
   printf("\n Enter Position Index \n ");
   scanf("%d",&positionIndex);

   if(positionIndex <0 || positionIndex >= size){
     printf("\n\nInvalid Index enter again \n\n ");
     goto labelOne;

   }
    

   // making space for new data 
   for ( int i = positionIndex; i < size; i++)
   {
    if(i==(size-1)){
*(arr + i)=0;
    }else{
*(arr + i)=*(arr + i+1);
    }
    
   }
  
   
}