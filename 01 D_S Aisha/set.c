#include<stdio.h>
char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char set1[26];
char set2[26];
int bit_set1[26];
int bit_set2[26];
int result[52];
int i=0,j=0;
int results[26];
# define MAX 26
void get_alphabets(char set[26], int n)
{
	printf("\nenter the elements in set:");
	for(int i=0;i<n;i++)
	{
	    scanf("%s",&set[i]);
	}
        printf(" \nThe elements in set:\t");
        for(i=0;i<n;i++)
	{
	    printf("%c",set[i]);
	}
}


void bit(char s[26],int bs[26],int z)
{	int i;
	int j;

	for(i=0;i<26;i++)
	{
			
		bs[i]=0;

	}


	for(i=0;i<z;i++)
	{
	
		for(j=0;j<26;j++)
		{

			if (s[i]==alphabet[j])
			{
				bs[j]=1;
			}		


		}



	}
}


void set_union()
{
       int i;
	for(i=0;i<26;i++)
	{
			
		result[i]=0;

	}

	for(i=0;i<26;i++)
	{		
		result[i]=bit_set1[i]|bit_set2[i];
		
	
	}	

}

void set_intersection(int bit_set1[26],int bit_set2[26])
{
	int i;
	for(i=0;i<26;i++)
	{
			
		result[i]=0;

	}

	for(i=0;i<26;i++)
	{		
		
		result[i]=bit_set1[i]&bit_set2[i];
	
	}

}


void set_complement(int x[26],int result[26])
{
	for(int j=0;j<26;j++)
	{
	    if(x[j]==1)
               {
                  
			result[j]=0;
               }
           else
              {
                   
			result[j]=1;
              }
	}
        
}

void set_com(int x[26])
{
	for(int j=0;j<26;j++)
	{
	    if(x[j]==1)
               {
                  
			results[j]=0;
               }
           else
              {
                   
			results[j]=1;
              }
	}
        
}


void display(int z[26])
{	int i;
	for(i=0;i<26;i++)
	{
			
		printf("%d ",z[i]);

	}
	printf("\n\t\t");
	for(i=0;i<26;i++)
	{
	
		

			if (z[i]==1)
			{
				printf("%c ",alphabet[i]);
			}
                      else
                        {   
                             printf("  ");
                        }		
	}

}

int main()
{
	int j, set1_sze, set2_sze;
	printf("\nenter the size you want in set1:");
	scanf("%d",&set1_sze);
	get_alphabets(set1, set1_sze);

	printf("\nenter the size you want in set2:");
	scanf("%d",&set2_sze);
	get_alphabets(set2, set2_sze);

	bit(set1, bit_set1, set1_sze);
	bit(set2, bit_set2, set2_sze);

        printf(" \n\n Union  : ");
	set_union();
        display(result);
	printf(" \n\n");
	

        printf(" \n Intersection  : ");
	set_intersection(bit_set1,bit_set2);
        display(result);
	printf(" \n\n");

        printf(" \n Complement of set1 : ");
        set_complement(bit_set1,result);
        display(result);
        printf(" \n\n");
        

	 printf(" \n Complement of set2 :");
        set_complement(bit_set2,result);
        display(result);
        printf(" \n\n");
	
        
	printf(" \n set difference (set1-set2)");
	set_com(bit_set2);
        set_intersection(bit_set1,results);
        display(result);
        printf(" \n\n");
	
	printf(" \n set difference (set2-set1)");
	set_com(bit_set1);
        set_intersection(bit_set2,results);
        display(result);
        printf(" \n\n");
	
	return 0;
}

 
