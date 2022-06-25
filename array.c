#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],i;
    printf("\n enter the element of the array");
    for ( i = 0; i <= 4; i++)
    {
        scanf("%d",& a[i]);
    }
    
    for ( i = 0; i <= 4; i++)
    {
        printf("\n %d",a[i]);
    }
    
    return 0;
}