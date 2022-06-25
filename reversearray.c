#include<stdio.h>
int main()
{
    int a[5],i,j;
    printf("\n enter the elemenet ");
 for ( i = 0; i <= 4; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=4;i>=0;i--)
    {
        printf(" %d  ",a[i]);
    }
    return 0;
}