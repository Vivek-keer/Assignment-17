
#include <stdio.h>
#include <string.h>

int main()
{
     int fre[256]={};int i; char str[20],temp;

     printf("Enter the string: \n");
     fgets(str,20,stdin);
     for(i=0;str[i];i++);
     str[i-1]='\0';

     for(i=0;str[i];i++)
     {
         fre[str[i]]++;

     }
     for(i=0;i<=255;i++)
     {
         if(fre[i]==0) continue;
         temp=i;
         printf("Frequency of %c is: %d\n",temp,fre[i]);

     }
     return 0;
}

