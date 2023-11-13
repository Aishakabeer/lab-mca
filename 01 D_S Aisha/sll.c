#include<stdio.h>
#include<stdlib.h>

struct node
	{
		int data;
		struct node*link;
	};

struct node *header=NULL;
void insert_at_front(int item)
{

    struct node *newnode;
    newnode=(struct node*) malloc(sizeof(struct node));
    newnode->data=item;
    if(header==NULL)
	{
        header=newnode;
        newnode->link=NULL;
	printf("Element Succesfully inserted at position 1 \n");
	}
	else
	{   
        newnode->link=header;
        header=newnode;
	printf("Element Succesfully inserted at position 1 \n");
	}	
}
void insert_at_end(int item)
{
    struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;	
	newnode->link=NULL;
	int count=0;

	if(header==NULL)
	{
	header=newnode;
	printf("Element Succesfully inserted at position 1 \n");
	}
	else
	{	
	struct node *ptr=header;

	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
		count++;	
	}
	ptr->link=newnode;
	printf("Element Succesfully inserted at position %d \n",count+2);

	}	
}
void insert_at_pos(int item, int key)
{
    int count=0;
    struct node *newnode;
    newnode=(struct node*) malloc(sizeof(struct node));
    newnode->data=item;
    struct node *ptr;
    ptr=header;
    while(ptr->data!=key && ptr->link!=NULL)
     {
        ptr=ptr->link;  
        count++; 
     }
    if((ptr->link==NULL) && ( ptr->data==key))
    {
      newnode->link=NULL;
      ptr->link=newnode;
      printf("\n%d element insert at the  %d position ",newnode->data,count+2); 
    }      

    else if((ptr->link==NULL)&&(ptr->data!=key))
     {

       printf("key not found");

     }
     
     else
     {

       newnode->link=ptr->link;
       ptr->link=newnode;
       printf("\n%d element insert at the  %d position ",newnode->data,count+2); 
     }
}

void delete_at_front()
{   if (header==NULL)
    {
        printf("list is empty");
    }
    else
    {
        struct node *ptr=header;


        printf("\n%d delete the element at the 1 st position ",ptr->data); 
        header=ptr->link;
        free(ptr);
    }
}

void delete_at_end()
{
 int count=0;
 if (header==NULL)
    {
        printf("list is empty");
    }
    else if(header->link == NULL)  
    {  
        header=NULL;  

    }  
    else
    {
        struct node *ptr1=header;
        struct node *ptr2=header;
        while(ptr1->link!=NULL)
        {   
            ptr2=ptr1;
            ptr1=ptr1->link;
            count++;
        }

        printf("\n%d Delete the element at the %d position ",ptr1->data,count+1); 
        ptr2->link=NULL;
        free(ptr1);
    }
}

void delete_at_pos(int key)
{
   int count=0;
   if (header==NULL)
    {
        printf("list is empty");
    }

    else
    {
        struct node *ptr1=header;
        struct node *ptr2=header;
	while((ptr1!=NULL) && (ptr1->data!=key))
	{
		ptr2=ptr1;
            	ptr1=ptr1->link;
                count++;
	}

	if(ptr1 == NULL)
	{
		printf("Key not found");
	}
	else
	{

		if(ptr2->link == NULL)
		{

                        printf("\n%d Delete the element at the %d th position ",ptr2->data,count);
			free(ptr2);
                        header = NULL;
		}
		else
		{
			if(ptr1 == header)
			{
				header = ptr1->link;
                                count++;
			}
			else
			{
				ptr2->link = ptr1->link;
                                count++;

			}
                        printf("\n%d Delete the element at the %d th position ",ptr1->data,count); 			
			free(ptr1);
		}
	}
    }

}

void search(int key)
{	int count=0;
	if(header==NULL)
	{
		printf("\n list is empty \n");	
	}
	else{
		struct node *ptr=header;

        while((ptr->data!=key) && (ptr->link!=NULL))
        {

            ptr=ptr->link;	
		count++;
        }	

         if((ptr->link==NULL) && (ptr->data!=key))
        {
            printf("key not found");
        }
	else
	   {
		printf("\nkey fount at position %d\n",count+1);		
	   }

	}
}


void traverse()
{
  struct node *ptr;
  ptr=header;
  if(ptr!=NULL)
  {
  while(ptr!=NULL)
   {
      printf("%d ",ptr->data);
      ptr=ptr->link;
   } 
  }
  else
  {
    printf("list is empty");
  }    
}
int main()
{ 	int z,k,c;	
	printf("LINKED LIST OPERATIONS\n");
	while(1)   
    {  

        printf("\n\n1.Insert at front\n2.Insert at end\n3.Insert after position\n4.Delete at front\n5.Delete at end\n6.Delete node at any position\n7.Display Elements\n8.Search position of Element\n9.Exit");  
        printf("\nSelect the options\n");         
        scanf("%d",&c);  
        switch(c)  
        {  
            case 1:  
                    printf("\nenter the data to insert at front \n");
                    scanf("%d",&z);
                    insert_at_front(z);
                    break;
            case 2:  
                    printf("\nenter the data to insert at end \n");
                    scanf("%d",&z);
                    insert_at_end(z);
                    break;
            case 3:  
                   if(header==NULL)
	           {
	           printf("\n list is empty \n");	
	           }
	           else
                   {
                    traverse();
                    printf("\nselect the position\n");
                    scanf("%d",&k);
                    printf("\nenter the data to insert after the position \n");
                    scanf("%d",&z);
                    insert_at_pos(z,k);
                    }
                    break;
            case 4:  
                    delete_at_front();       
                    break;  
            case 5:  
                    delete_at_end();        
                    break;  
            case 6:if(header==NULL)
	           {
	           printf("\n list is empty \n");	
	           }
	           else
                   {
                    traverse();
                    printf("\n---select the position---\n");
                    scanf("%d",&k);  
                    delete_at_pos(k);  
                    }        
                    break;  
            case 7:   
                    traverse();        
                    break;  
            case 8: printf("\n---enter the key---\n");
                    scanf("%d",&k);  
                    search(k);          
                    break;  

	    case 9: printf("\nExited.");
                    exit(0);  
                    break;

            default:  
                    printf("invalid input");  
        }  
    }  

	return 0;

}

