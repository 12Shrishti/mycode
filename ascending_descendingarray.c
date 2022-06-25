#include<stdio.h>
int main()
{
    int a[30],i,size,j,k;
    printf("\n enter size of array=");
    scanf("%d",&size);
    
    for(i=0;i<=size-1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=size-1;i++)
    printf("%d  ",a[i]);
    printf("\n ascending order ");
    for(i=0;i<=size-1;i++)
    {
        for(j=i+1;j<=size-1;j++)
        if (a[i]>a[j])
        {
            k=a[i];
            a[i]=a[j];
            a[j]=k;
        }
        
    }
    for(i=0;i<=size-1;i++)
    printf(" %d  ",a[i]);
}