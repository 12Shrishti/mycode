#include<stdio.h>
int main()
{
    int a[5],b[5],c[10],i,j,k,temp;
    printf("enter element in first array:");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("enter element in second array:");
    for(j=0;j<5;j++)
    scanf("%d",&b[j]);
    k=a[0];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if (k>a[i])
            {
               temp=a[i];
               a[j]=a[i];
               a[/]=temp;     
            }
            
        }
    }

}