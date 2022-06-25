#include<stdio.h>
struct complex
{
    int real;
    int imaginary;
};
struct complex stu[10];
int main()
{  int i,s=0,m=0;
    printf("\n enter real part of the number:\n");
    for ( i = 0; i < 10; i++)
    {
    scanf("%d",&stu[i].real);
    }
    
    printf("enter imaginary part of the number:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&stu[i].imaginary);
    }
    printf("\n the sum of real parts is :");
    
    for(i=0;i<10;i++)
    {
        s=s+stu[i].real;
    }
    printf("%d",s);
    printf("\nthe sum of imaginary part is :");
    for(i=0;i<10;i++)
    {
        m=m+stu[i].imaginary;
    }
    printf("%d",m);
    
    return 0;
}