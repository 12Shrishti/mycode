#include<stdio.h>
int main()
{
    int a[6],i,count=0,neg=0;
    printf("enter elements=\n");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 6; i++)
    {
        if(a[i]>0)
        {
            count++;
        }
        else
        {
        neg++;
        }
    }
    printf("The positive number is %d",count);
    printf("\n The negative number is %d",neg);
    return 0;
}