#include<stdio.h>
int main()
{
    int n;
    printf("enter number upto find the sum:\n");
    scanf("%d",&n);
    printf("the sum is %d",sum(n));
}
int sum(int n)
{  if(n==0)
return 0;
else



return(n+sum(n-1));

}