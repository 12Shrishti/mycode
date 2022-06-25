#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,m,n=0;
   printf(" enter first natural number print the sum\n ");
    scanf(" %d",&m);
    
    do
    {
        n=n+i;
        i++;
    } while (i<=m);//by using do while loop
    
    /*while(i<=m) //by using while loop 

    {
       n=n+i; 
       i++;
    }*/
   /* for(i=1;i<=m;i++)//sum of number using for loop
    {
        n=n+i;

    }*/ 
    printf("\n the  total sum of number=%d ",n);
    return 0;
}