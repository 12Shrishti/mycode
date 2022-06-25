#include<stdio.h>
int main()
{

 int i=1, m, k;
  printf("TABLE YOU WANT \n");
  scanf("%d",&m);
  do
  { k=m*i;
    printf("%d * %d=%d\n",m,i,k);
    i++;
      
  } while (i<=10);
  


/*while (i>=1) //reverse order multiplication by using while loop
{
    k=m*i;
    printf("%d * %d=%d\n",m,i,k);
    i--;

}*/

{
    /* code */
}

  /*for(i=10;i>=1;i--) //reverse order 
  {
      k=m*i;
      printf("%d * %d=%d\n",m,i,k);
  } */ 
  return 0;

}