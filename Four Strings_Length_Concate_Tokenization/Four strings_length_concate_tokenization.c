#include<stdio.h>
void main()
{
    int i,n,size;
    char a[50];
    char b[50];
    char c[50];
    char d[50];
    printf("\nInput First Strings: ");
    gets(a);
    printf("\nInput Second Strings: ");
    gets(b);
    printf("\nInput Third Strings: ");
    gets(c);
    printf("\nInput Fourth Strings: ");
    gets(d);
    for (size = 0; a[size] != '\0'; ++size);
    printf("\nLength of 1st Strings: %d\n",size);
    for (size = 0; b[size] != '\0'; ++size);
    printf("Length of 2nd Strings: %d\n",size);
    for (size = 0; c[size] != '\0'; ++size);
    printf("Length of 3rd Strings: %d\n",size);
    for (size = 0; d[size] != '\0'; ++size);
    printf("Length of 4th Strings: %d\n",size);
    for (size = 0; a[size] != '\0'; ++size);
    a[size++]=' ';
    for(i=0 ; b[i]!='\0'; i++)
    {
        a[size++]= b[i];
    }
    a[size++]=' ';
    for(i=0 ; c[i]!='\0'; i++)
    {
        a[size++]= c[i];
    }
    a[size++]=' ';
    for(i=0 ; d[i]!='\0'; i++)
    {
        a[size++]= d[i];
    }
    printf("\nTotall Concatenated result: ");
    for(i=0; i<size; i++)
    {
        printf("%c",a[i]);
    }
    printf("\nFinal Length of concatenated: %d\n",i);
    printf("Tokens are:%d\n\n",i);
    for(i=0; i<size; i++)
    {
        if(a[i]==' ' && a[i+1]!=' ')
        {
            printf("\n");
            i++;
        }
        printf("%c",a[i]);
    }
}
