#include <stdio.h>

int main() 
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) 
	{
        printf("Row and column sizes must be positive integers.\n");
        return 1;  
    }

    int array[rows][cols];
    int transpose[cols][rows];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            transpose[j][i] = array[i][j];
        }
    }

    printf("Original array:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the array:\n");
    for (int i = 0; i < cols; i++) 
	{
        for (int j = 0; j < rows; j++) 
		{
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
