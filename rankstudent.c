#include<stdio.h>
int main()
{
    int a[4][5],i,j,s=0,k[4],max,swap;
    for(i=0;i<4;i++)
    { 
        printf("enter id  and marks:\n");
        for(j=0;j<4;j++)
        {  
            scanf("%d",&a[i][j]);
            
        }
    }  
    for(i=0;i<4;i++)
    {  s=0;
         for ( j = 1; j < 4; j++)
    {
        s=s+a[i][j];
    }  
    a[i][4]=s;
    } 
    /*max=a[0][4];
    for ( i = 0; i < 4; i++)
    {
     if(max>a[i][4])
     max=a[i][4];
     j=0;
     while(j<5)
     {
      swap=a[i][j];
      a[i][j]=a[i+1][j];
      a[i+1][j]=swap;
      j++;
     }
    }*/
    
    printf(" id       sub1   sub2   sub3   total  \n ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
        printf("%d      ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}