#include<stdio.h>
struct student
{
   int marks;
};
int display (struct student[]);
int main()
{ struct student a[5];
int i,k;
printf("enter marks of 5 student:\n");
for(i=0;i<=4;i++)
scanf("%d",&a[i].marks);
k=display(a[0].marks);
printf("\n the sum is %d",k);
return 0;
  }
  int display(struct student m[0])
  { 
  
      int s=0,j;
      for(j=0;j<=4;j++)
      s=s+m[j].marks;
      return s;
  }