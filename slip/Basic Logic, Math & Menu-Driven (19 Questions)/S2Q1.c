//Write a c program to accept 2 integers from user and interchange them without using 3rd variable.

#include<stdio.h>
int main() {
int a, b;
// Input two integers
printf("Enter two integers:\n");
scanf("%d %d", &a, &b);
printf("\nBefore swapping: a = %d, b = %d\n", a, b);
// Swap without using third variable
a = a + b;
b = a - b;
a = a - b;
printf("After swapping: a = %d, b = %d\n", a, b);
return 0;
}