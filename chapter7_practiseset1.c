#include<stdio.h>
int main()
{
     int a[10],i,n;
     printf("enter the table you want to print=\n");
     scanf("%d",&n);
     printf("the table is\n");
     for(i=0;i<=9;i++)
     {a[i]=n*(i+1);
     }
     for(i=0;i<=9;i++)
     {
         printf("%d*%d=%d \n",n,(i+1),a[i]);
     }
    return 0;
}