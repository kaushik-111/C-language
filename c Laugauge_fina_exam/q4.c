

#include <stdio.h>

int main()
{

    printf("Quetion: 4. write a c program to find sqare of each element of an 1d array using pointer.\n");

    int arr[] = {2, 3, 4, 5, 8};

    int *ptr = arr;

    for (int index = 0; index <= 4; index++)
    {
        *ptr = (*ptr) * (*ptr);
        ptr++;
    }

    printf("Squared array: ");
    for (int index = 0; index <= 4; index++)
    {
        printf("%d ", arr[index]);
    }
    printf("\n");

    return 0;
}