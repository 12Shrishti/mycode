#include<stdio.h>
int main()
{
    int *m,p,*k,r,a;
    
    printf("enter the value of p=\n");
    scanf("%d",&p);
    printf("enter the value of r=\n");
    scanf("%d",&r);
    m=&p;
    k=&r;
    printf("\n the addresses of m is= %u",m);
     printf("\n the addresses of k is= %u",k);
    m++;
     printf("\n after increament the addresses of m is= %u",m);
m--;
 printf("\nafter decerement the addresses of m is= %u",m);

a=*m+*k;
printf("\naddition %d",a);
a=*m-*k;
printf("\nsubtraction %d\n",a);
if(m>k)
printf(" m is greater \n the greater address of m \n=%u",m);
else
printf("k is greater \n the greater address of k =%u",k);
}
