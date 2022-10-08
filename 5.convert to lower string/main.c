#include <stdio.h>
#include <stdlib.h>


int main()
{
    char str[20]; int i;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>=65&&str[i]<=90)
        printf("%c",str[i]+32);
    }
    return 0;
}
