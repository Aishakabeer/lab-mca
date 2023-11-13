#include<stdio.h>
int queue[1000];
int rear=-1,front=-1;
int item;
int MAX;
void enqueue(int item)
{
  if(rear==-1 && front==-1)
   {
     rear=0;
     front=0;
     queue[rear]=item;
   }
  else if((rear+1)% MAX ==front)
   {
    printf("circular queue overflow");
   }
   else
   {
     rear=(rear+1)% MAX;
     queue[rear]=item;
   }
}  
void dequeue()
{
   if(front==-1 && rear==-1)
   {
     printf("\n queuek is underflow.");
     
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
     front=(front+1)%MAX;
  }
}
void display()

{
int i;
  if(front==-1 && rear==-1)
   {
     printf("\n circular queue is empty \n");
   }
  else
   {
     printf("\n circular queue is.");
    
     for(i=front;i!=rear;i=(i+1)%MAX)
       {
         printf("%d \t",queue[i]);
     
       }
           printf("%d",queue[rear]);
       
   }
}
int main()
{
  int choice;
  printf("enter the size of the queue :");
  scanf("%d",&MAX);
  queue[MAX];
  printf("operations circular queue\n1.insertion element to the  circular queue\n2.deletion element to the circular queue\n3.display element to the circular queue\n4.Exit\n");
  do
   {
    printf("\nEnter the choice :");
    scanf("%d",&choice);
    switch(choice)
    {
     case 1:
	printf("enter the value to be added:");
        scanf("%d",&item);
       enqueue(item);
        break;
     case 2:
        dequeue();
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
