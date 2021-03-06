#include<stdio.h>
#include<string.h>
int main()
{

    char str1[1000];
    printf("input any string: ");
    gets(str1);

    char* token;
    token = strtok(str1," ");

    /*
    printf("%s",token);

    token = strtok('\0'," ");
    printf("\n%s",token);

    token = strtok('\0'," ");
    printf("\n%s",token);

*/

    while(token!='\0')
    {

        printf("%s\n",token);
        token=strtok('\0'," ");

    }

    return 0;
}
