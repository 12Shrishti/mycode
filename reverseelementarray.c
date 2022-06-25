#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    printf("enter element \n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n reverse element\n");
    for ( i = 0,j=4; i<=4,j >=0; i++,j--)
    {
        temp=a[i];
        a[j]=temp;
        printf(" %d  ",a[j]);
       
    }
   // printf("%d",temp);
    
    return 0;
}