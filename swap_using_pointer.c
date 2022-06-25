/* swapping of two numbers using pointer*/
#include<stdio.h>
void swap(int*,int*);
int main()
{   
    int a,b;
    printf("enter two values of a and b:\n");
    scanf("%d%d",&a,&b);
    printf("\nBEFORE SWAPPING: ");
    printf("%d  %d ",a,b);
    swap(&a,&b);
    printf("\nAFTER SWAPPING: ");
    printf("%d  %d",a,b);
  
  return 0;
}
void swap(int *p,int *n)
{ int k;
k=*p;
*p=*n;
*n=k;

}