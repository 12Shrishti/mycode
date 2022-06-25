#include<stdio.h>
#include<stdlib.h>
#define max 10
int stack_arr[max];
int top=-1;
void push(item);
int pop();
int peek();
void display();
 main()
{  
    int choice,item,i;
        printf("1:PUSH\n");
        printf("2: POP\n");
        printf("3:DISPLAY THE TOP ELEMENT\n");
        printf("4: DISPLAY ALL THE ELEMENT \n");
        printf("5:QUIT\n");
        printf("ENTER YOUR CHOICE \n");
        scanf("%d",&choice);
        switch(choice)
        {   case 1:
          printf("ENTER THE ITEM TO  BE PUSHED");
          scanf("%d",&item);
          push(item);
          break;
          case 2:
          item=pop();
          printf("\n POPED ITEM IS %d ",item);
          break;
          case 3:
          item=peek();
          printf("THE PEAK ELEMENT IS %d",item);
          break;
          case 4:
          display();
          break;
          case 5: 
          exit (1);
          default:
          printf("\n WRONG CHOICE");
           
         }
}
     void push(int item)
     {   if(top==max-1)
     {
         printf("overflow");
     }
     else
     {
         
         top=top+1;
         stack_arr[top]=item;
     }   
     }
     int pop()
     {  int item;
         if(top==-1)
         {
             printf("\n STACK IS UNDERFLOW");
         }
         else
         {
         item=stack_arr[top];
         top=top-1;
         return item;
         }
     }
     int peek()
     {   int item;  
          if(top==-1)
         {
             printf("\n STACK IS UNDERFLOW");
         }
          else
          {
        return( stack_arr[top]);
        
          }
          }
          void display()
          {  int i;
          if (top==-1)
          {  
              printf("\nunderflow");
              
          }
          else
          {
              for(i=top;i>=0;i--)
              printf("%d",stack_arr[i]);
    
          }
          }