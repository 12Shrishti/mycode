#include<stdio.h>
int main()
{
    int a;
    printf("enter number :");
    scanf("%d",&a);
    if(a%3==0 && a%5!=0)
    printf("\nfizz");
     if (a%5==0 &&a%3!=0)
        printf("\n buzz");
        if(a%5==0 && a%3==0)
        printf("\n fizz buzz");

     if(a%5!=0 && a%3!=0)
     printf("\n neither fizz nor buzz");
    
}



