#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);


    if (rows <= 0 || cols <= 0) 
	{
        printf("Row and column sizes must be positive integers.\n");
        return 1;  
    }

    int array[rows][cols];

    
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int largest = array[0][0];

    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            if (array[i][j] > largest) 
			{
                largest = array[i][j];
            }
        }
    }


    printf("The largest element is: %d\n", largest);

}
