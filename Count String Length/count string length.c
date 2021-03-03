#include <stdio.h>
#include <stdlib.h>

int main()
{

     char str1[100];
     printf("please input some string: ");
     gets(str1);
     printf("your input string is: ");
     puts(str1);
     int length=0;
     int i;

    for(i=0; str1[i]!='\0';i++)
    {
      length++;
    }
    printf("the length of the string is: %d", length);

    return 0;
}
