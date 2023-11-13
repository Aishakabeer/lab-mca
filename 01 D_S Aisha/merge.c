//2.write a c program merge two sorted arrays:

#include<stdio.h>
void mergearray(int a[],int s1,int b[],int s2,int merge[])
{
   int i=0;
   for(i=0;i<s1;i++)
     merge[i]=a[i];
  for(i=0;i<s2;i++)
    merge[i+s1]=b[i];
}
void sortarray(int merge[],int s)
{
  int t,j,i;
  for(i=0;i<s;i++)
   {
    for(j=i+1;j<s;j++)
      {
        if(merge[i]>merge[j])
         {
          t=merge[i];
          merge[i]=merge[j];
          merge[j]=t;
         }
      }
   }
}
int main()
{
	
        int s1,s2,s,i;
	printf("enter the SIZE of first array :");
	scanf("%d",&s1);
	int a[s1];
	printf("enter the first array elements  :");             
	for(int i=0;i<s1;i++)
		{
	  	   scanf("%d",&a[i]);
		}
	printf("enter the SIZE of second array :");
	scanf("%d",&s2);
	int b[s2];
	printf("enter the second array elements  :");             
	for(i=0;i<s2;i++)
		{
	  	   scanf("%d",&b[i]);
		}
        
	s=s1+s2;
	sortarray(a,s1);
        printf("first sorted array:");  
	 for(i=0;i<s1;i++)
		{
	  	   printf("%d\n",a[i]);
		}
	sortarray(b,s2);
        printf("second sorted array:");  
	 for(i=0;i<s2;i++)
		{
	  	   printf("%d\n",b[i]);
		}
	int merge[s1+s2];
	mergearray(a,s1,b,s2,merge);
	printf("merged array:");  
	 for(i=0;i<s;i++)
		{
	  	   printf("%d\n",merge[i]);
		}
	sortarray(merge,s);
	printf("merge and sorted array:");  
        for(i=0;i<s;i++)
		{
	  	   printf("%d\n",merge[i]);
		}
	return 0;
}
