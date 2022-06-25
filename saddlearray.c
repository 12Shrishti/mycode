#include<stdio.h>
int main()
{   
    int a[3][3],i,j,max;
    int b[3][3]={
                {0,0,0},
               {0,0,0},
               {0,0,0}
                };

              
   printf("enter 9 element in array\n");
     for(i=0;i<=2;i++)
    {  
    for(j=0;j<=2;j++)
    scanf("%d",&a[i][j]);
    }
    for(i=0;i<=2;i++)
    {  
    for(j=0;j<=2;j++)
    {
    printf("%d  ",a[i][j]);
    }
    printf("\n");
    }

    
    for(i=0;i<=2;i++)
    {   max=a[i][0];
    for(j=0;j<=2;j++)
    {
        if(max>=a[i][j])
        {
        max=a[i][j];
        b[i][j]=1;
        }
            }
    }  
    for(j=0;j<=2;j++)
    {   max=a[i][0];
    for(i=0;i<=2;i++)
    {
        if(max<=a[i][j])
        {
        max=a[i][j];
        b[i][j]++;
        }
            }
            }
    printf("the saddle point is :");  

    for(i=0;i<=2;i++)
    {  
    for(j=0;j<=2;j++)
    if(b[i][j]==2)
     printf("%d",a[i][j]);
     }

    return 0;
}