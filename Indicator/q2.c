
//Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.

#include <stdio.h>

void calculateCubes(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int *element = arr + (i * cols + j);
            *element = (*element) * (*element) * (*element);

            printf("Cubes : - %d ", *element);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols]; 

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    calculateCubes((int *)arr, rows, cols);

    return 0;
}