#include <stdio.h>

int main() 
{
    int size,i,foundNegative ;

 
    printf("Enter the array's size: ");
    scanf("%d", &size);

    if (size <= 0) 
	{
        printf("Array size must be a positive integer.\n");
     
    }

    int arr[size];

    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
   foundNegative = 0;  


    printf("Negative elements from the Array: ");
    for (int i = 0; i < size; i++) 
	{
        if (arr[i] < 0) 
		{
            if (foundNegative) 
			{
                printf(", ");
            }
            printf("%d", arr[i]);
            foundNegative = 1;
        }
    }
    
    if (!foundNegative) 
	{
        printf("None");
    }
    printf("\n");

}
