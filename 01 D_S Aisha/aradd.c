#include<stdio.h>

int main()
{
	int n;
        int total=0;
	int i;
	printf("enter the value of n :");
        scanf("%d",&n);
	int a[n];
        if(n>0&&n<=50)
          {
		printf("enter the elements in array :");             
		for(i=0;i<n;i++)
			{
	  		   scanf("%d",&a[i]);
			   total=total+a[i];
			}
		
     		printf(" sum of numbers %d ",total);	
	  }
	else if(n<0)
        {
                printf("\n wrong input ");
        }
        else
	{
		printf("\n Entered number is out of limit ");
        }
       return 0;
	
}	
