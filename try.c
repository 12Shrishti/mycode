#include<stdio.h>
#include<stdlib.h>
#define max 10
int stack_arr[max];
int top=-1;
void push( int item);
int pop();
int peek();
void display();
int isfull();
int isempty();
 main()
{  
    int choice,item,i;


    while(1)
    {
        printf("\n 1:PUSH\n");
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
          //item=peek();
          printf("THE PEAK ELEMENT IS %d",peek());
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
}
     void push(int k)
     {   if(isfull())
     {
         printf("\noverflow");
         return;
     }
         
         top=top+1;
         stack_arr[top]=k;
     }   
     int pop()
     {  int item;
         if(isempty())
         {
             printf("\n STACK IS UNDERFLOW");
             exit(1);
         }
         item=stack_arr[top];
         top=top-1;
         return item;

     }
     int peek()
     {   int item;  
          if(isempty())
         {
             printf("\n STACK IS UNDERFLOW");
             exit(1);
         }
          
        return( stack_arr[top]);
        
          }
          void display()
          {  int i;
          if (isempty())
          {  
              printf("\nunderflow");
              return;
              
          }
              printf("Stack element is :\n\n");
              for(i=top;i>=0;i--)
              printf("%d  ",stack_arr[i]);
    
          }
          int isempty()
          {
              if(top==-1)
              return 1;
              else
              return 0;
          }
          int isfull()
          {
              if(top==-1)
              return 1;
              else
              return 0;
          }
         