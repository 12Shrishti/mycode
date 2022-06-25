#include<stdio.h> 
int main()
{   
    int m,n,value;
    int ackermann(int,int);
    printf("enter two positive value \n");
    scanf("%d%d",&m,&n);
    value=ackermann(m,n);
    printf("the value is %d",value);
    return 0;
}
int ackermann(int m,int n)
{
    if(m==0)
    return(n+1);
    else if(m!=0 && n==0)
    return(ackermann(m-1,1));
    else if(m!=0 && n!=0)
    return(ackermann(m-1,ackermann(m,n-1)));

}