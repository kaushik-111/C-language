
//Q2. Print value of array using array of pointer.

#include <stdio.h>
int main()
{

    int array[] = {1, 2, 3, 4, 5};
    int *pointer[5];

    for(int index = 0 ; index <= 4 ; index++){
     pointer[index] = &array[index];
        printf("%u %d\n", pointer[index] , *pointer[index]);
    }
    return 0;
}