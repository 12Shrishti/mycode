#include<stdio.h>
int main()
{
    int a[5],i,max,min;
    printf("\n enter the element \n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[1];
    for ( i = 0; i <=4; i++)
    {
    if (max<a[i])
    {
        max=a[i];
    }
    
    }
    printf("\n the greatest value %d",max);
    min =a[1];
    for(i=0;i<=4;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("\n the smallest number %d",min);

    return 0;
}