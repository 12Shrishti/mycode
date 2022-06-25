#include<stdio.h>
int main()
{  
    int a[8],i,k,s=0,m;
    printf("enter element :");
    
    for(i=0;i<=7;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=7;i++)
    printf("%d ",a[i]);
    for(i=0;i<=7;i++)
    {
        if(a[i]>0) 
        {
        k=i;
        break; 
        }
    } 
    //printf("%d",k);


    printf("\n");
    for(i=k+1;i<=7;i++)
    {
        if(a[i]>0)
        m=i;
    }
    for(i=k;i<=m;i++)
    {
        s=s+a[i]; 
        printf("%d ",a[i]);
    }
    printf("\n the sum is %d",s);

    return 0;
}