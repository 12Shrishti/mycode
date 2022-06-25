/* FIND LCM OF TWO NUMBERS */
#include<stdio.h>
int main()
{  int a,b,k,lcm;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    k=gcd(a,b);
    lcm=(a*b)/k;
    printf("\n the gcd of two numbers is %d :",lcm);
}  
int gcd(int a,int b)
{
    if(a==b)
    return a;
    if(a%b==0)
    return b;
    if (b%a==0)
   return a;
   if(a>b)
   return (gcd(a%b,b));
   if(a<b)
   return(gcd(a,b%a));

    

}