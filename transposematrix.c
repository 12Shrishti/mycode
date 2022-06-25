#include<stdio.h>
int main()
{
     int a[5][5],i,j,b[5][5];
     printf("enter element in the matrix:\n");
     
     for(i=0;i<=4;i++)
     {
     for(j=0;j<=4;j++) 
     scanf("%d",&a[i][j]);
     }
     printf("\n BEFORE TRANSPOSE\n"); 
     for(i=0;i<=4;i++)
     {
     for(j=0;j<=4;j++) 
     {
     printf("%d ",a[i][j]); 
     }
       printf("\n");    
 }  
 
     for(i=0;i<=4;i++)
     {
     for(j=0;j<=4;j++) 
     b[j][i]=a[i][j];
     }  
     printf("\n");     
     printf("TRANSPOSE MATRIX IS ");
     printf("\n");
     for(i=0;i<=4;i++)
     {
     for(j=0;j<=4;j++) 
     {
     printf("%d ",b[i][j]);
     }
     printf("\n");
     }
}