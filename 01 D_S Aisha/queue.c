#include<stdio.h>
int queue[1000];
int rear=-1,front=-1;
int add_item;
int MAX;
void insert(int add_item)
{
  if(rear==MAX-1)
   {
     printf("\n queue is overflow.");
   }
 else if(rear==-1 && front==-1)
  { 
     front=rear=0;
    queue[rear]=add_item;
  }

  else
   {
      rear=rear+1;
     queue[rear]=add_item;
   }
}  
void delete()
{
   if(front==-1 )
   {
     printf("\n queue is underflow.");
     return;
   }
  else if(front==rear)
  {
    printf("deleted element in queue %d ",queue[front]);
    front=-1;
    rear=-1;
  }
  else
   {
     printf("deleted element in queue %d ",queue[front]);
     front=front+1;
   }
}
void display()

{
int i;
  if(front<=-1)
   {
     printf("\n queue is empty \n");
   }
  else
   {
     printf("\n queue is.");
     for(i=front;i<=rear;i++)
         printf("%d \t",queue[i]);
   }
}
int main()
{
  int choice;
  printf("enter the size of the queue :");
  scanf("%d",&MAX);
  queue[MAX];
  printf("operations queue\n1.insertion element to the queue\n2.deletion element to the queue\n3.display element to the queue\n4.Exit\n");
  do
   {
    printf("\nEnter the choice :");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:
	printf("enter the value to be added:");
        scanf("%d",&add_item);
       insert(add_item);
        break;
     case 2:
        delete();
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
