#include<stdio.h>
#include<string.h> 
int main()
{   
    char a[20];
    int i,k=0;
    printf("enter string\n");
    gets(a);
    puts(a);
    for(i=0;a[i]!='\0';i++)
    {
    
         k=k+1;
    }
    printf("%d",k);
return 0 ;

}