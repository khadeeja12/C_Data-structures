#include <stdio.h>
void main()
{
    int arr[50], n, i,num, count=0,pos=-1;
    printf("Enter total number of elements in an array: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) //read array elements
    {
        printf("Enter element a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter number to find Occurrence: ");
    scanf("%d", &num);
    for (i = 0; i < n; i++) //count occurance of num
    {
        if (arr[i] == num)
        {

            count++;
            
        } 
    }
    printf("Occurrence of %d is: %d \n", num, count);
}
