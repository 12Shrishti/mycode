#include<stdio.h>
int tentimes(int  );
int main()
{
    int k,f;
    printf("\n enter the value=");
    scanf("%d",&k);
  tentimes(k);
  printf(" %d",k);
    return 0;
}
int tentimes(int k)
{
    k=10* k;
}