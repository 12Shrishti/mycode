#include<stdio.h>
int main()
{
  int s=0,k,a,count=0,m=0,n=0;
  long int num,r;
  printf(" enter the number:");
  
  scanf("%ld",&num);
  r=num;
  printf("%ld",num);
  while(num!=0)
  {  k=num%10;
  num=num/10;
  s=s*10+k;
 } 
 printf("\n WHICH PLACE UPTO YOU WANT TO CUT NUMBERS:");
 scanf("%d",&a);
 printf("\n number cutting from left to right side\n");
   while(count!=a)
  {  k=s%10;
  s=s/10;
  m=m*10+k;
  count++;
 } 
 printf("\n%d",m);  
 count=0;
 s=0;
 k=0;
 while(count!=a)
  {  k=r%10;
  r=r/10;
  s=s*10+k;
  count++;
 } 
 count=0;
 while(count!=a)
  {  k=s%10;
  s=s/10;
  n=n*10+k;
  count++;
 }  
 printf(" \nnumber cutting from right to left side:");

 
 printf("\n%d",n);
  return 0;
  }