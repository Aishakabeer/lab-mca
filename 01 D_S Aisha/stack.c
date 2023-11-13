#include<stdio.h>
int stack[1000];
int choice,n,i,x,size,top;
void push(int x)
{
  if(top>=n-1)
   {
     printf("\n the stack is overflow.");
   }
  else
   {
     top=top+1;
     stack[top]=x;
     printf("element is added %d",stack[top]);
   }
}  
void pop()
{
   if(top<=-1)
   {
     printf("\n the stack is underflow.");
   }
  else
   {
     printf("deleted element in stack %d ",stack[top]);
     top=top-1;
   }
}
void display()
{
  if(top>=0)
   {
     printf("\n stack is element is \n");
     for(int i=top;i>=0;i--)
        {
	     printf("%d\n",stack[i]);
	}
     printf("\n press next choice."); 
   }
  else
   {
     printf("\n Stack is empty.");
   }
}
int main()
{
  int x;
  top=-1;
  printf("enter the size of the stack :");
  scanf("%d",&n);
  printf("operations stack\n1.pusp\n2.pop\n3.display\n4.Exit\n");
  do
   {
    printf("\nEnter the choice :");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:
	printf("enter the value to be added:");
        scanf("%d",&x);
        push(x);
        break;
     case 2:
        pop();
        break;
     case 3:
        display();
        break;
     case 4:
        printf("exited");
        break;
     default:
        printf("enter the valid choice");
    }
   }while(choice!=4);
  return 0;
}
