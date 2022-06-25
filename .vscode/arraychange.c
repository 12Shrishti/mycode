#include<stdio.h>
int main()
{ 

int a[6],b[6],i,k,m;
printf("enter elements in first array:\n");
    for(i=0;i<=5;i++)
        scanf("%d",&a[i]) ;
       printf("enter element in the second array:\n");
     for(i=0;i<=5;i++)
     scanf("%d",&b[i]) ; 
   printf("\n the first array element entered is:");
    for(i=0;i<=5;i++)
        printf("%d ",a[i]) ;
    printf("\n the second array element entered is:");
    for(i=0;i<=5;i++)
        printf("%d ",b[i]) ;
    for(i=0;i<=5;i++)
    {   if(a[i]%2==0)
       {
             k=a[i];
             a[i]=b[i];
             b[i]=k;
         }
    }  
    printf("\n after reversing");
      for(i=0;i<=5;i++)
        printf("%d ",a[i]);
    printf("\n\n");
    for(i=0;i<=5;i++)
        printf("%d ",b[i]) ;
    return 0; 

}