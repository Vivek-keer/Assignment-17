
#include <stdio.h>
#include <string.h>

int main()
{
     int i,x,y,j,count; char str[20][20],temp[20][20]={};
     printf("Enter the number of string you want sort: "); scanf("%d",&x);
     printf("Enter the string one by one: \n");
     fflush(stdin);
     for(i=0;i<x;i++)
     {
         fgets(str[i] ,20,stdin);

     }
     for(j=0;j<x;j++)
     {

     for(i=0,count=0;i<x;i++)
         {
            if(i!=j)
           {
             y=strcmp(str[j],str[i]);
             if(y>0) count++;
           }
         }
         strcpy(temp[count],str[j]);

     }
     printf("sorted string is: \n");
     for(i=0;i<x;i++)
        printf("%s",temp[i]);
     return 0;



}


