#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[150];
    gets(str);
    char* token;
    token= strtok(str," , . = ; ( ) [ ] { } + - * /");

 while(token!='/0')
 {
     printf("%s\n",token);
     token=strtok('\0'," , . = ; ( ) [ ] { } + - * /");
 }

    return 0;
}


