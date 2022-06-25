#include<stdio.h>
int gcd(int ,int);
int gcda(int,int);
int main()
{  int a,b,r,lcm,p,q,k;
    printf("enter two numbers to find the lcm:");
    scanf("%d%d",&a,&b);
     p=a*b;
    if (a>b)
    {  
       gcd(a,b);
      // printf("%d",k);
       lcm=p/k;
      printf("\n %d",lcm);
    
    }
    if (a<b)
    {
        r=gcd(a,b);
        printf("%d",r);
        lcm=p/k;
      printf("%d",r);
    } 

    
    return 0;
    
} 
int gcd(int m,int n)
{
    if(m>n)
    {
    gcd(m-n,n);
    } 
    if( m==n)
    return n;
   if(m<n)
    gcda(m,n);

}
int gcda(int p,int q)
{  if (p<q)
  gcda(p,p-q);
 if(p==q)
return p;
if(p>q)
gcd(p-q,q);

}