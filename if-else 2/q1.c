#include<stdio.h>

int main() {
    int number1, number2, number3;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    printf("Enter the third number: ");
    scanf("%d", &number3);

    if (number1 < number2) {
        if (number1 < number3) {
            printf("The minimum value is: %d\n", number1);
        } else {
            printf("The minimum value is: %d\n", number3);
        }
    } else {
        if (number2 < number3) {
            printf("The minimum value is: %d\n", number2);
        } else {
            printf("The minimum value is: %d\n", number3);
        }
    }

    return 0;
}
