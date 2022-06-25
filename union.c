#include<stdio.h>
int main()
{
    int a[10],b[10],i,j,m,n;
    int flag=0,count=0,k;
    printf("ENTER THE SIZE OF THE FIRST ARRAY:\n");
    scanf("%d",&m);
    printf("ENTER THE SIZE OF THE SECOND ARRAY\n");
    scanf("%d",&n);
    printf("ENTER THE ELEMENT OF THE FIRST ARRAY:\n");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("ENTER THE ELEMENT OF THE SECOND ARRAY\n");
    for(j=0;j<n;j++)
    scanf("%d",&b[j]);
    printf("ELEMENT OF THE FIRST ARRAY:\n");
    for(i=0;i<m;i++)
    printf("%d  ",a[i]);
    printf("\n");
     printf("ELEMENT OF THE SECOND ARRAY:\n");
     for(j=0;j<n;j++)
     printf("%d  ",b[j]);
     for(i=0;i<m;i++)
     {  flag=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
            flag=flag+1;
             if(flag!=0)
        count=count+1;
            }

        }
        

     }
     if(m>n ||m==n)
     {
     k=n-count;
     m=m+k;
     printf("\n UNION ELEMENT IS ");
     printf("    %d",m);
     }
     else
      {
     k=m-count;
     n=n+k;
     printf("\n UNION ELEMENT IS ");
     printf("    %d",n);
     }
     printf("\n INTERSECTION ELEMENT IS");
     printf("   %d",k);
    
    

}