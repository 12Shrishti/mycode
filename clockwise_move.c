#include<stdio.h>
int main()
{
    int a[8],i,j,m;
    printf("enter element in array:\n");
    for(i=0;i<=7;i++)
    scanf("%d",&a[i]);
    for ( i = 0; i <=7; i++)
    {
        printf("%d  ",a[i]);
    }
    for(i=0;i<=6;i++)
    {
        m=a[i+1];
        a[i+1]=a[0];
        a[0]=m;
    } 
    printf("\nafter clockwise rotation ");

    for ( i = 0; i<=7; i++)
    {
        printf("%d  ",a[i]);
    }
    
}