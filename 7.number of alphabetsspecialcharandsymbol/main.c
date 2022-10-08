#include <stdio.h>
#include <stdlib.h>

int main()
{ char str[20];
    int d=0,A=0,a=0,s=0,i;
    printf("ENter the character: ");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>=48&&str[i]<=57) d++;
        else
        if(str[i]>=97&&str[i]<=122) a++;
        else
        if(str[i]>=65&&str[i]<=90) A++;
        else s++;

    }
    printf("Digits are %d\n",d);
    printf("Uppercase Alphabets are %d\n",A);
    printf("Special characters are %d\n",s);
    printf("Lowercase Alphabets are %d\n",a);

    return 0;
}
