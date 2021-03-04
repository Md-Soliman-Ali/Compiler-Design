#include <stdio.h>

int main()
{

     char str1[100];
     int i,length=0;
     printf("input any string: ");
     gets(str1);

    for(i=0; str1[i]!='\0';i++)
    {
      length++;
    }

    printf("your reverse string is: ");

    for(i=length-1; i>=0 ;i--)
    {
      printf("%c", str1[i]);
    }

    return 0;
}
