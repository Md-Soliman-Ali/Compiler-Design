#include<stdio.h>
#include<stdlib.h>

void checkcomment(char);
void linecomment();
 FILE *fp1, *fp2;

int main()
{

    char c;
    fp1=fopen("input.txt","r");
    fp2=fopen("output.txt","w");

    while ((c=fgetc(fp1))!=EOF)
    {
      checkcomment(c);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}

void checkcomment(char c){
char d;
if(c=='/')
{
    d=fgetc(fp1);
    if(d=='/')
    {
        linecomment();
    }
    else
    {
        fputc(c,fp2);
        fputc(d,fp2);
    }
}

else{
    fputc(c,fp2);
}
}

void linecomment()
{
    char e;
    while ((e=fgetc(fp1))!=EOF){
      if(e=='\n')
      {
          return;
      }
    }
}
