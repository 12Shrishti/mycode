#include<stdio.h>
#include<stdlib.h>
int main()
{  
    int *p,k,i;
    printf("enter the number of block you want:");
    scanf("%d",&k);
    p=(int*) malloc(k*sizeof(int));
    printf("\nenter element in block:");
    for(i=0;i<=k-1;i++)
    scanf("%d",(p+i));
    for(i=0;i<=k-1;i++)
    printf("%d ",*(p+i));
    reallocate(p,k);
    return 0;
}  
void reallocate ( int *r,int k)
{   
    int n,i;
    int *m;
   printf("\n how many blocks you want to  reallocate blocks:\n ");
    scanf("%d",&n);
    if(n<k)
    {  printf("newer block element contains:\n");
    for(i=0;i<n;i++)
    printf("%d ",*(r+i));
    }
    if(n>k)
    {
   m= (int *)realloc(r,n*sizeof(int));
   printf("enter %d  extra element  ",n-k);
   for(i=k;i<n;i++)
   scanf("%d",(m+i));
    printf("the all element is \n");
    for(i=0;i<n;i++)
    printf("%d  ",*(m+i));
    }
    
}