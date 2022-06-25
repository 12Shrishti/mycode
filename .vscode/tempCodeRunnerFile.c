#include<stdio.h>
int main()
{
    int i,size,j;
    printf("enter the length of pattern:");
    scanf("%d",&size);
    for(i=0;i<=size-1;i++)
    {
        for(j=0;j<=size-1;j++)
        {  if(j>=i)
            printf("* ");
            else
            printf(" ");
        }
        printf("\n");
    } 
    return 0;
}