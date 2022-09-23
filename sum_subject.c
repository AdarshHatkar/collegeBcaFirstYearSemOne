# include <stdio.h>

int main(){

    int s1,s2,s3;
    
    printf("enter marks of math out of 100 \n") to;
    scanf("%i",&s1);
    
    printf("enter marks of bio out of 100 \n");
    scanf("%i",&s2);
    
    printf("enter marks of cs out of 100 \n");
    scanf("%i",&s3);
    
    
    
    int total = s1+s2+s3;
    
    int percentage =( total * 100)/300;
    
   
    
    printf("total marks= %i  and percentage= %i",total, percentage);
   
    return 0; 
}   