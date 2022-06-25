#include<stdio.h>
int main()
{
    int a[3][10],i,j,m,k=1;
    printf("enter table number=");
    scanf("%d",&m);
    for ( i = 1; i <= 3; i++)
{
  for ( j = 1; j <= 10; j++)
  {
      a[i][j]=m*k;
      k++;
  }
}
printf("table is \n");
for ( i = 1; i <= 3; i++)
{
  for ( j = 1; j <= 10; j++)
  {
      printf("%d   ",a[i][j]);
  }
  printf("\n");
}
}