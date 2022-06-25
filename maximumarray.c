#include<stdio.h>
int main()
{
int a[10],i,max,secmax;
    printf("enter the numbers=");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);

    }




    
    max=a[0];
    for(i=1;i<=9;i++)
    {
        if(max<a[i])
        {
        secmax=max;
        max=a[i];
        }
    }
    printf(" the maximum value is %d",max);
    printf("\n the second maximum value is %d",secmax);
}