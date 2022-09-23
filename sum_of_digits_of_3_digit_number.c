# include <stdio.h>

int main(){

    int n,n1,d1,n2,n3;
    
    printf("enter 3 digit number \n");
    scanf("%i",&n);
    n1=n/100;
    d1=n%100;
    n2=d1/10;
    n3=d1%10;
    
    int sum=n1+n2+n3;
    
    printf("sum of %i is %i",n,sum);
   
    return 0; mil
}   