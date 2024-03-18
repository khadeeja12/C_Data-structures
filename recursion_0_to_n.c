#include<stdio.h>
int a[10],n;
int main()
{
	int i;
	printf("\n enter the no of elements :");
	scanf("%d",&n);
	printf("\n enter the elements to the array :");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    disp(0);
}
int disp( int initpos)
{
 if(initpos<n)
 printf("%d \t",a[initpos]);
 disp(initpos+1);
}
