#include<stdio.h>
int main()
{
    int size,i,k,a[20];
    printf("\n enter the size of the array=");
    scanf("%d",&size);
    printf("\n enter elements in array \n");
    for(i=0;i<=size-1;i++)
    scanf("%d",&a[i]);
    printf("\n after rotation");
    for ( i = 0; i <= (size-1)/2; i++)
    {
        k=a[size-1-i];
        a[size-1-i]=a[i];
        a[i]=k;

    }
    for ( i = 0; i <= size-1; i++)
    {
        printf(" %d  ",a[i]);
    }
    

}