#include<stdio.h>
#define max 50
int a[max],pos=-1;
void insert()
{
	if(pos+1==5)
	{
		printf("\n array is full");
	}                                                        
	else
	{
		int e;
		printf("\n enter the element:");
		scanf("%d",&e);
		a[++pos]=e;
		printf("\n inserted element is %d",e);
	}
	
}
void delete()
{
 	if(pos==-1)
	{
		printf("\n array is empty");
	}
	else
	{
		printf("\n deleted element is %d",a[pos--]);
	}
}
void search()
{
	int f=0,i,e;
	printf("\n enter the element to search:");
	scanf("%d",&e);
	for(i=0;i<max;i++)
	{
		if(a[i]==e)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("\n element %d is found at position %d",e,i+1);
	}
	else
	{
		printf("\n element is not found");
	}
}
void sort()
{
	int i,j,temp;
	if(pos==-1)
	{
		printf("\n array is empty");
	}
	else
	{
		for(i=0;i<pos;i++)
		{
			for(j=0;j<pos;j++)
			{
			  if(a[j]>a[j+1])	
			  {
			  	temp=a[j];
			  	a[j]=a[j+1];
			  	a[j+1]=temp;
			  }	
			}
		}
	}
	printf("\n sorted elements are:");
	for(i=0;i<=pos;i++)
	{
		printf("\n %d \t",a[i]);
	}
}
int menu()
{
	int ch;
	printf("\n insert-1 \n search-2 \n delete-3 \n sort-4 \n exit-5 \n enter your choice:");
	scanf("%d",&ch);
	return ch;
}
int main()
{
	int ch;
	for(ch=menu();ch!=6;ch=menu())
	{
		switch(ch)
		{
			case 1 :
				    insert();
				    break;
		    case 2:
		    	    search();
		    	    break;
		    case 3:
		    	    delete();
		    	    break;
		    case 4:
		    	   sort();
		    	   break;
		    case 5:
		    	   break;
		    default:
		    	    printf("\n invalid choice");
		    	    break;
		}
	}
	return 0;
}
