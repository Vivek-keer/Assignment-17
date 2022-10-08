#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c,str[20]; int i,count=0;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    printf("Enter the character: ");
    scanf("%c",&c);
    for(i=0;str[i];i++)
    {
        if(str[i]==c)  count++;
    }
    printf("the character %c occurs in given string: %d",c,count);
    return 0;
}
