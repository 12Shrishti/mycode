# define pi 3.14
# define sq m*m
# define cu sq*m
# define start {
# define end }
# define  input scanf
#include<stdio.h>
int main()
start
    float area,radius;
    int m,square,cube;

    printf("enter radius of circle:");
    input("%f",&radius);
    area=pi*radius*radius;
    printf("\n the area is %.3f",area);
    printf("\nenter number");
    input("%d",&m);
    square=sq;
    printf("\nsquare is ");
    printf("%d",square);
    printf("\nthe cube is ");
    cube=cu;
    printf("\n%d",cube);
    // PREDEFINED MACROS :D
    printf("\n date: %s ",__DATE__);
    printf("\n file %s",__FILE__);
    printf("\n time %s",__TIME__);
    printf("\n line%d",__LINE__);
    return 0;
end