#include<stdio.h>
int fun(int,int,int);
int main()
{float k;
int a,b,c;
    printf("enter three numbers=\n");
    scanf("%d%d%d",&a,&b,&c);
 k=   fun(a,b,c);
 printf("\n the average %f",k);
}
int fun(int m,int n,int p)
{ float avg;
avg=(m+n+p)/3;
return avg;

}