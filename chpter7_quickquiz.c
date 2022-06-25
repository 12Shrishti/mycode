#include<stdio.h>
# define row 3
#define coloumn 3
void display(int *p)
{
    int i,j;
    printf(" the number you entered=\n");
    for ( i = 0; i <=2; i++)
    {
       for(j=0;j<=2;j++)
       {
       printf("%d ",*p);
       p++;
    }
    }
    
}
int main()
{
int a[row][coloumn],i,j;
printf("enter elements in the array=\n");
for(i=0;i<=2;i++)
{
    for( j=0;j<=2;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
display(&a);
return 0;
}