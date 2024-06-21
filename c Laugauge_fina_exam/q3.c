#include <stdio.h>

int main() {

printf("question : 3. write a c program that defines a function to reverse a 3 digit number.\n");

  int Number, Reverse = 0, Remainder;

  printf("Enter a Number :  ");
  scanf("%d", &Number);

  while (Number != 0) {
    Remainder = Number % 10;
    Reverse = Reverse * 10 + Remainder;
    Number /= 10;
  }

  printf("Reversed Number = %d", Reverse);

  return 0;
}