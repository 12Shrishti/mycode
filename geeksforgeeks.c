#include<stdio.h>
int main()
{
    int a[20],b[20],i,size,d;
    printf("enter size:\n");
    scanf("%d",&size);
    printf("enter element in array:\n");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("entered element is :");
    for(i=0;i<size;i++)
        printf("%d ",a[i]);

    printf("\nenter digit length to rotate:");
    scanf("%d",&d);
    for(i=0;i<d;i++)
        b[i]=a[i];
    for(i=0;i<size;i++)
    { 
        a[i]=a[d+i];
        if(d+i==size)
        break;
    }

    for(i=0;i<d;i++)
    {
        a[size-d+i]=b[i];
    }
for(i=0;i<size;i++)
        printf("%d ",a[i]);
        return 0;                      
        }