#include <stdio.h>

int main(){
// declaring  
  FILE *fp;

  fp = fopen("a.txt","r");

//exit(0);
//   fputc('A',fp);
//   fputs("\nAdarsh Hatkar",fp);

//   fprintf(fp,"\nis %s Student","BCA - 1");

printf("\n %c", fgetc(fp));
 fclose(fp);

    return 0;
}