#include<stdio.h>
void insertion_at_begining();
int 

main()
{
    int arr[20],i,size;
    printf("please enter size of array less than 18 ");
    scanf("%d",&size);
    printf("enter element in the array:");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<size;i++)
    printf("%d ",arr[i]);
    while(1)

    insertion_at_begining();
}
void insertion_at_begining()
{

}