#include<stdio.h>
#define row 3
#define coloumn 3
int main()
{
int a[row][coloumn],b[row][coloumn],c[row][coloumn],carry;
printf("enter 9 elements in array=\n");
for(int i=0;i<=2;i++)
{
    for (int j = 0; j < 3; j++)
    {
    scanf("%d",&a[i][j]);
    }
    
} 
printf("enter 9 element in second array\n");
for(int i=0;i<=2;i++)
{
    for (int j = 0; j < 3; j++)
    {
    scanf("%d",&b[i][j]);
    }
    
}
for(int i=0;i<=2;i++)
{
    for (int j = 0; j < 3; j++)
    {
    c[i][j]=a[i][j]+b[i][j];
    }
    
}
printf("after adding two large of 9 digit using array is :\n");
for(int i=0;i<=2;i++)
{
    for (int j = 0; j < 3; j++)
    {
    printf("%d  ",c[i][j]);
    }
    }
}
