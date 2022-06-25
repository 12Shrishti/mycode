#include<stdio.h>
int main()
{ 
    int c,d;
    char string[]="Sanskriti";
    printf("\n\n");
    for(c=0;c<=8;c++)
    {
        d=c+1;
        printf("%-15.*s\n",d,string);
    }
    for (c=8;c>=0;c--) 
    {
        d=c+1;
        printf("%-15.*s\n",d,string);
    }
    
     return 0;
}