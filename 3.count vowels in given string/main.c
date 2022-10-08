#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[10]={"aeouiAEIOU"},str[20]; int i,j,count=0;
    printf("Enter the string: ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
      for(j=0;c[j];j++)
    {
        if(c[j]==str[i])  count++;
    }
    printf("Vowels in given string: %d",count);
    return 0;
}
