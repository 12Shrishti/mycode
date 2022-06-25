#include<stdio.h>
int main()
{ int m,i,n,sum=0;
    printf("enter table to find its sum");
    scanf("%d",&m);
    for(i=1;i<=10;i++)
    {n=m*i;
    printf("\n%d*%d=%d",m,i,n);
    sum=sum+n;
    }
    printf("\nthe sum of table is %d",sum);
    return 0;
}