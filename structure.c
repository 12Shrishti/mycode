#include<stdio.h>
struct complex
{
    int real;
    int imaginary;
};
struct complex a[4],b[4];
int main()
{    
    struct complex c[4];
    int i,j;
    printf("enter number for real part of A\n");
    for(i=0;i<4;i++)
    scanf("%d",&a[i].real); 
    printf("\n enter number for  imaginary part of A \n");
    for(i=0;i<4;i++)
    scanf("%d",&a[i].imaginary);
    printf("enter number for  real part of B \n");
    for(i=0;i<4;i++)
    scanf("%d",&b[i].real);
    printf("\n enter number for imaginary part of B\n");
    for(i=0;i<4;i++)
    scanf("%d",&b[i].imaginary);
    printf("the sum of real part is:\n");
    for(j=0;j<4;j++)
    {
  c[j].real=a[j].real+b[j].real;
  printf("%d  ",c[j].real);
    }
    printf("\nthe sum of imaginary part is:");
  for(j=0;j<4;j++)
  {
   c[j].imaginary=a[j].imaginary+b[j].imaginary;
  printf("%d  ",c[j].imaginary);
  }
  return 0;   
}