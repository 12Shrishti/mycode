#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],i;
    int k,temp,l;
    printf("enter string to reverse");
    scanf("%s",&a[i]);
    puts(a);
    l=strlen(a);
    printf("%d",l);
    for(i=0;i<=(l-1)/2;i++)
    {  temp=a[i];
     a[i]=a[l-1-i];
     a[l-1-i]=a[i];
    }
    puts(a);
    return 0;
}