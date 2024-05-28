
//Q5 Find value of x using chain of pointer.

#include<stdio.h>
void main(){

int a = 10;
int *p1;
int **p2;
int ***p3;

p1 = &a;
p2 = &p1;
p3 = &p2;

printf("%u %u %u %d",p3 , *p3 ,**p3 , ***p3);
}