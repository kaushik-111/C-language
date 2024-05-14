
// Q1. Take input from user for array elements prints it's average.

#include <stdio.h>
int main(){

    int size;
    printf("Enter Size of Array:-");
    scanf("%d", &size);

    int array[size], sum = 0, average;
    for (int index = 0; index < size; index++)
    {
        printf("Enter a Elemant:-");
        scanf("%d", &array[index]);
    }
    for (int index = 0; index < size; index++)
    {
        sum = sum + array[index];
        average = sum / size;
    }
    printf("%d", average);

    return 0;
}