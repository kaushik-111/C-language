#include <stdio.h>

int main() {

    printf("question:1.create a c program to check if a number is entered by the user is a porositive or consonant using a switch statement.\n");
    
    int Number;
    
    printf("Enter a number: ");
    scanf("%d", &Number);
    
   switch (Number > 0) {
        case 1:
            printf("The number %d is positive.\n", Number);
            break;
        case 0:
            if (Number == 0) {
                printf("The number is zero.\n");
            } else {
                printf("The number %d is non-positive.\n", Number);
            }
            break;
    }
    
    return 0;
}