#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i; char str[20],str_cpy[20];
    printf("Enter the string: ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
        str_cpy[i]=str[i];
        printf("%s",str_cpy);
    return 0;
}
