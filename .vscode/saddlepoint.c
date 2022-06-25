#include<stdio.h>
int main()
{ 
    int a[5][5],b[5][5],i,j,r,c,max,min;
    printf("enter elements:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            b[i][j]=0;
        }
    }
    for(i=0;i<5;i++)
    {
        min=a[i][0];
        c=0;
        for(j=1;j<5;j++)
        {
            if(a[i][j]<min)
            {
                min=a[i][j];
                c=j;
            }
        }   
        b[i][c]++;
    }    
    for(i=0;i<5;i++)
    {
        max=a[0][i];
        r=0;
        for(j=1;j<5;j++)
        {
            if(a[j][i]>max)
            {
                max=a[j][i];
                r=j;
            }
        }  
        b[r][i]++;
    } 
    printf("the pay matrix \n\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        printf("%d",a[i][j]);
        printf("\n\n");
    }  
    printf("the working matrix is \n\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        printf("%d   ",b[i][j]);
        printf("\n\n");
    } 
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(b[i][j]==2)
            {
                printf("the saddle point is at %dth row and %dth coloumn \n\n",i,j);
                printf("the saddle value is %d \n\n",a[i][j]);
            }
        }
    }
    return 0;
}