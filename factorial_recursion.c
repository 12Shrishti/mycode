#include<stdio.h>
int fact(int);
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);
    if(num<0)
    printf("The factorial of negative number does not exit\n ");
    printf("the factorial of number is %d ",fact(num));
}
int fact(num)
{
    if(num==0)
    return 1;
    else
    return(num*fact(num-1));
}