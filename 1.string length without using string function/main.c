#include <stdio.h>
#include <stdlib.h>
int length(char str[]);
int main()
{
    char str[20];
    printf("Enter the string: ");
    fgets(str,20,stdin);// fgets also take new line character(enter key) as input//
    printf("The length of given string is: %d",length(str0));
    return 0;
}
int length(char str[])
{ int i;
     for(i=0;str[i];i++);
     return i-1;
}
