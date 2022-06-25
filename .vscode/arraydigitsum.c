#include<stdio.h>
int main()
{  
    int a[10],b[10],c[11],i,sum=0,carry=0;
    printf("enter ten digit number in a:\n ");
    for(i=0;i<=9;i++) 
    scanf("%d",&a[i]);  
    printf("enter ten digit number in b:\n");
    for(i=0;i<=9;i++) 
    scanf("%d",&b[i]);
    printf("\n you have entered a value is:");
    for(i=0;i<=9;i++) 
    printf("%d",a[i]);
    printf("\n you have entered b value is:");
    for(i=0;i<=9;i++) 
    printf("%d",b[i]);
    for(i=9;i>=0;i--)
      {
        sum=a[i]+b[i] + carry;
        if(sum>9)
        {
            c[i+1]=sum-10;
            carry=1;
        } 
        else 
        {
        c[i+1]=sum;
        carry=0;
        }
    } 
    c[0]=carry;
    printf("\n");
    printf("the sum is :");
    for(i=0;i<=10;i++)
    printf("%d",c[i]);
     return 0;
}