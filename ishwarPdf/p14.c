/*
WAP for printing following pattern. 
       1
       1 2
       1 2 3 
       1 2 3 4

*/
#include <stdio.h>
void main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
}