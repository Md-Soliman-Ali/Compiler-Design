#include <stdio.h>

int main()
{

     char str1[100], str2[100];
     int i,length=0,j;
    printf("input two string or char: \n");
    gets(str1);
    gets(str2);

    for(i=0; str1[i]!='\0';i++)
    {

    }
    str1[i]='  ';
    i++;

    for(j=0; str2[j]!='\0';j++,i++)
    {
      str1[i]=str2[j];
    }

    str1[i]='\0';
    printf("concatenating two string: ");
    puts(str1);



    char* token;
    token = strtok(str1," ");

    while(token!='\0')
    {

        printf("%s\n",token);
        token=strtok('\0'," ");

    }

    return 0;
}

