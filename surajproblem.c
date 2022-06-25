#include <stdio.h>
int main()
{
    int a[10], b[10], i, j, n, m,temp,k;
    //TAKE INPUT FROM THE FIRST ARRAY 


    printf("Enter size of first array:\n");
    scanf("%d", &n);
    printf(" PLEASE ENTER THE DATA OF FIRST ARRAY:\n");
    for (i = 0; i < n ; i++)
        scanf("%d", &a[i]);


    // TAKE INPUT FROM THE SECOND ARRAY
    printf("Enter size of second array:\n");
    scanf("%d", &m);
 
  printf(" PLEASE ENTER THE DATA OF SECOND ARRAY:\n");
    for (j = 0; j < m; j++)
        scanf("%d", &b[j]);
    printf("\n DATA OF FIRST ARRAY::");
    for (i = 0; i < n ; i++)
        printf("%d  ", a[i]);
    printf(" \nDATA OF SECOND ARRAY::");
    for (j = 0; j < m; j++)

        printf("%d  ", b[j]);
        // SORTING OF FIRST ARRAY 
        
        for ( i = 0; i < n; i++)
        {  
           for ( j = i+1; j < n; j++)
           {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
           }
           
        }
        
    // SORTING OF SECOND ARRAY 



     for ( i = 0; i < m; i++)
        {  
           for ( j = i+1; j < m; j++)
           {
            if (b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
                

            }
            
           }
           
        }
        
    //logic



    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            if(a[i]>b[j])
            {
            temp=a[i];
            a[i]=b[j];
            b[j]=temp;
            }
        }
        
    }
    for ( i = 0; i < n; i++)
        {  
           for ( j = i+1; j < n; j++)
            {
             if (a[i]>a[j])
             {
                 temp=a[i];
     
                 a[i]=a[j];
             a[j]=temp;
            }
            
          }
           
       }




     printf("\n DATA OF FIRST ARRAY::");
    for (i = 0; i < n ; i++)
    printf("%d  ", a[i]); 
    for ( i = 0; i < m; i++)
        {  
           for ( j = i+1; j < m; j++)
           {
            if (b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
                

            }
            
           }
           
        }
    
 printf("\n DATA OF second ARRAY::");
    for (j = 0; j < m ; j++)
    printf("%d  ", b[j]);
    
        
}
