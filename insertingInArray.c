#include<stdio.h>



int main()
{


int arrLength=10;
int arr[arrLength], i=0;

int insertAt= 3; 
// 0< insertAt < arrLength -1

int insertData=12;


arr[0]=13;
arr[1]=46;
arr[2]=56;
arr[3]=65;
arr[4]=16;
arr[5]=19;


// traversing start from here
// before operation 
printf("array before operation\n");
for(i=0; i<arrLength; i++){

 

 printf("arr[%i]=%i \n",i,arr[i]);

}

// traversing  ends here 
// before operation 


// inserting start here 

// loop for swaping and making
// space at target place 

for(i=arrLength; i> insertAt ; i--){

arr[i]=arr[i-1];

}
// loop end 
arr[insertAt]=insertData;

// inserting end here 

// traversing start from here
// after operation 
printf("\n \narray after operation \n");
for(i=0; i<arrLength; i++){

 

 printf("arr[%i]=%i \n",i,arr[i]);

}

// traversing  ends here 
// after operation 

return 0;
    
    
  
    
    
    }
    
    