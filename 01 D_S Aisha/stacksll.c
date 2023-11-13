#include<stdio.h>
#include<stdlib.h>
# define MAX 5
int s=0;
struct node
	{
	int data;
	struct node*link;
	};
struct node *Top=NULL;
void push(int item)
{
	        struct node *new;
		new=(struct node*)malloc(sizeof(struct node));
		new->data=item;	
		if(Top==NULL)
		{
		   Top=new;
		   new->link=NULL;
        	}
		else
	    	{	
		    new->link=Top;
		    Top=new;
		}
		printf("Element inserted succesfully\n");
}

void pop()
{
		printf("Element deleted succesfully:  %d\n",Top->data);		
		struct node *temp=Top;
		Top=Top->link;
		free(temp);
   
}
void disp()

{	if(Top==NULL)

	{
		printf("\n list is empty \n");	
	}
	else
	{
            struct node *temp=Top;
            printf("\nItems are:\n");
            while(temp!=NULL)
            {
                    printf("%d  ",temp->data);
                    temp=temp->link;	
            }
            printf("  \t  ");	
	}
}

void search(int key)
{	
	int count=0;
    	 if (Top==NULL)
        {
		 printf("\nKey not found\n");
        }		
	 else
        {
	struct node *temp1=Top;	   
        while((temp1->data!=key) && (temp1->link!=NULL))
        {

            temp1=temp1->link;	
		    count++;
        }	

         if((temp1->link==NULL) && (temp1->data!=key))
        {
            printf("\nkey not found\n");
        }
	else
	   {
		printf("\nKey fount in %d  position \n",count+1);		
	   }
       }

}

int main()

{ 	
    int item,key,choice;	
	printf("STACK USING LINKED LIST OPERATIONS \n");
	while(1)   
    {  
        printf("\n1.PUSH\n2.POP\n3.Display the Elements\n4.Search position of Element\n5.Exit");  
        printf("\nSelect your option\n");         
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  if(s >= MAX)
			{
				printf(" overflow\n");	
			} 
		    else
                        {
                          s++;
                          printf("\nEnter the Element\n");
                          scanf("%d",&item);
                          push(item);
                         }
                    break;
            case 2:  
                   if (Top==NULL)
                 	{
		       printf("stack underflow\n");	
	           }	
	            else
	           {
                    pop();
		    s--;
                   }
                    break;
            case 3: 
                    disp();        
                    break;  
            case 4: printf("\nEnter the Key\n");
                    scanf("%d",&key);  
                    search(key);          
                    break; 
	    case 5: printf("\nExited\n");  
                    exit(0); 
                    break;
            default:  

                    printf("Invalid input\n");  
        }  
    }  
	return 0;
}
