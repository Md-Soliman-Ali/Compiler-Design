#include<stdio.h>
#include<stdlib.h>

void checkcomment(char);
void linecomment();
void block_comment();
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
   if((d=fgetc(fp1))=='*')
    block_comment();
   else if (d=='/')
    linecomment();
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

void block_comment()
{
    char d,e;
    while((d=fgetc(fp1))!=EOF)
    {
        if(d=='*')
        {
            e=fgetc(fp1);
            if(e=='/')
                return;
        }
    }
}

