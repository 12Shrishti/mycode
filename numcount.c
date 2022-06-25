#include<stdio.h>
int main()
{
    int a[20],i,size,k,j,count=1;
    printf("enter size of  array=\n");
    scanf("%d",&size);
    printf("enter element in array=\n");
    for(i=0;i<=size-1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=size-2;i++)
    {
        for(j=i+1;j<=size-1;j++)
        if (a[i]>a[j])
         {   
         k=a[i];
        a[i]=a[j];
        a[j]=k; 
        } 
        } 
        printf("after sorting \n");

    for ( i = 0; i <= size-1; i++)
    {
        printf("%d  ",a[i]);
    } 
    printf(" frequency of terms \n");
    i=0;
    while(i<=size-2)
    {
        if(a[i]==a[j+1]) 
        {
        count=count +1;
        i++;
        }
        else 
        {
        printf(" No of %d is %d times",a[i], count);
        count=1;
        i++;
        }
    }
    return 0;
}

