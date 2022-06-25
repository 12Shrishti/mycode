#include<stdio.h>
int main()
{
    int a[5],*ptr;
    printf("enter element\n");
    for (int i = 0; i <=4; i++)
    {
    
    scanf("%d",&a[i]);
    }
ptr=&a[4];
    for (int i = 4; i >=0; i--)
    {
    
    printf("%d    ",*ptr);
    ptr--;
    }
    return 0;
    


    
    
}