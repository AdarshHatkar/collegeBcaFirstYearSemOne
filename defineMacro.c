/*Learning micros */
#include <stdio.h>

#define add(a,b)  if(a>b) \ 
                  printf("a is greater");\
                    else \
                 printf("b is greater");

#define PI 3.14 


int main()
{
 float pi = PI;
     add(5,3);
   printf("\n %f",pi);

printf("\n date:%s",__DATE__);
printf("\n time:%s",__TIME__);
printf("\n file:%s",__FILE__);
printf("\n line:%d",__LINE__);
printf("\n ansi:%d",__STDC__);

    return 0;
}