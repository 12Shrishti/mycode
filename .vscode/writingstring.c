#include<stdio.h>
int main()
{    
    char country[15]="united kingdom";
    printf("\n\n");
    printf("*123456789012345*\n");
    printf("-----\n");
    
    printf("%15s\n",country);
    printf("%15.6s\n",country);
   printf("%-15.6s\n",country);
    printf("%.3s\n",country);
    printf("%s\n",country);
     return 0;
}