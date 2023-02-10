#include <stdio.h>

int main(){
// declaring  
  FILE *fp;
char ch;
// printf("write data and pres ctrl=z to end ");
  fp = fopen("fh2.txt","r");

// while ((ch=getchar())!=EOF)
// {
//    fputc(ch,fp);
// }

if(fp == NULL){
    printf("error");
    exit(1);
}

printf("\n %c", fgetc(fp));
 fclose(fp);

    return 0;
}