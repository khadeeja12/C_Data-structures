#include<stdio.h>
# define size 100
int main()
{
	int a[size][size],b[size][size],c[size][size],k,r1,r2,c1,c2,i,j;
	printf("\n enter the rows and coloumns of first array:");
	scanf("%d %d",&r1,&c1);
	printf("\n enter the rows and coloumns of second array:");
	scanf("%d %d",&r2,&c2);
	if(r1==r2 && c1==c2)
	{
		printf("\n enter the elements into first array:");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
			  	scanf("%d",&a[i][j]);	
			}
		}
		
		printf("\n enter the elements into second array:");
	    for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
			  	scanf("%d",&b[i][j]);	
			}
		}
	}
	printf("\n the first array elements are:");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
			  	printf("%d \t",a[i][j]);	
			}
		}
		printf("\n the second array elements are:");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
			  	printf("%d \t",b[i][j]);	
			}
		}
		
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<c1;k++)
				 {
				 	c[i][j]=c[i][j]+a[i][k]*b[k][j];
				 }
			}
		}
		
	printf("\n resultant array after multiplication is :");
	for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
			  	printf("%d \t",c[i][j]);	
			}
		}
	
}

