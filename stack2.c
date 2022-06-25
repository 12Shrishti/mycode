#include <stdio.h>
#define max 7
int top = -1;
int data;
int update=1;
int stack[max];
//void push();
//void pop();
int main()
{
     while (update<5)
    {
    
    int choice;


    printf("1..PUSH\n");
    printf("2..POP\n");
    printf("3..EXIT\n");
    printf("ENTER YOUR CHOICE \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            exit(1);
        default:
            printf("\n INVALID CHOICE");
            break;
        }
        update=update+1;
    }


    return 0;
}
void push()
{
    if (top == max - 1)
    {
        printf("OVERFLOW \n");
    }
    else
    {
        printf("enter data\n");
        scanf("%d", &data);
        top = top + 1;
        stack[top] = data;
        printf("INSERTED DATA");
    }
}
void pop()
{
    if (top == -1)
    {
        printf("underFLOW \n");
    }
    else
    {

        data = stack[top];
        printf("The %d popped out  ", data);
        top = top - 1;
    }
}