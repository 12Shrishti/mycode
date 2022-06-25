#include<stdio.h>
int main()
{
    int a[20],i,temp,/m,ele,j;
    printf("Enter size of array:");
    scanf("%d",&m);
    printf("\n Enter element in the array:");
    for(i=0;i<m;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        
    printf("  %d",a[i]);
    }
    for(i=0;i<m;i++)
    {
        ele=a[i];
        for(j=i+1;j<m;j++)
        {
            if(ele>a[j])
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }

printf("\n");
for(i=0;i<m;i++)
    printf("  %d",a[i]);
}
    





