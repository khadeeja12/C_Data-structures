#include<stdio.h>
int a[50],n,i,j,temp;
void read()
{
  for(i=0;i<n;i++)
  {
  	printf("Enter element a[%d] :",i);
  	scanf("%d",&a[i]);
  }
}
void sort()
{
  { 
    for(i=0;i< n-1;i++)
   	{
     for(j=i+1;j< n;j++)
 	  {
   		if(a[i]>a[j])
  		 {
    		temp = a[i];
    		a[i] = a[j];
   		    a[j] = temp;
   		 }
       }
    }
  }
   printf("\nArray in sorted in ascending order \n");
}
void disp()
{
    for(i=0;i<n;i++)
   {
    printf("%d\t",a[i]);
   }
}
int menu()
{
   int ch;
   printf("\n 1.Insert \n 2.Sort \n 3.Display \n 4.Exit \n enter your choice :");
   scanf("%d",&ch);
   return ch;
}
void process()
{
    int ch;
    for(ch=menu();ch!=4;ch=menu())
    {
        switch(ch)
        {
            case 1: read();
                    break;
            case 2: sort();
                    break;
            case 3: disp();
                    break;
            case 4: break;
            default :
                    printf("Wrong choice");
                    break;
        }
    }
}
void main()
{
  printf("Enter the number of element  :");
  scanf("%d",&n);
  process();
}


