#include <stdio.h>
#include <stdlib.h>
int length(char str[]);

int main()
{
    char str[20],c; int i;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    for(i=length(str)-1;i>=0;i--)
        printf("%c",str[i]);





    return 0;
}

int length(char str[])
{
    int i;
    for(i=0;str[i];i++);
    return i-1;
}
