
//8. **Reverse an array.**

// Implement a function to reverse the elements of an array.

#include<stdio.h>

void reverse(int arr[], int size);
int main(){
    int size;
    printf("Enter the size of an Array : ");
    scanf("%d",&size);

    int arr[size];

    for (int index = 0; index < size; index++)
    {
        printf("Enter the value of a[%d] : ", index);
        scanf("%d",&arr[index]);
    }

    reverse(arr, size);
    return 0;
}

void reverse(int arr[], int size){
    int temp;
    for(int index = 0; index < (size / 2) ; index++){
        temp = arr[index];
        arr[index] = arr[size - index - 1];
        arr[size - index - 1] = temp;
    }

    for(int index = 0; index < size; index++){
        printf("\nThe value of a[%d] : %d", index, arr[index]);
    }
}