#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1, *fp2;

    char c;
    fp1=fopen("input.txt","r");
    fp2=fopen("output.txt","w");

    /*c=fgetc(fp1);
    printf("%c",c);*/

    while ((c=fgetc(fp1))!=EOF)
    {
      //  printf("%c",c);

      fputc(c,fp2);

      if(c==' ')
      {
          while((c=fgetc(fp1))==' ')
          {

          }
          fputc(c,fp2);
      }
    }

    fclose(fp1);
    fclose(fp2);


    return 0;
}

