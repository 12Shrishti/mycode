#include<stdio.h>
int main()
{
    int a[8],i,j,tmp,s;
    printf("enter element in array:\n");
    for(i=0;i<=7;i++)
    scanf("%d",&a[i]);
    for ( i = 0; i <=7; i++)
    {
        printf("%d  ",a[i]);
    }
    s=a[0];
    for ( i = 0; i <=6; i++)
    {
        tmp=a[i+1];
        a[i+1]=s;
        s=tmp;
    }
    a[0]=s;
    printf(" \n CYCLIC ORDER IS..  ");
    for ( i = 0; i <=7; i++)
    {
        printf("%d  ",a[i]);
    }
}