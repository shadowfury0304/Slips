//C program to write a factorial of function using recursion

#include <stdio.h>
// Function declaration
int factorial(int n);
int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (num < 0)
printf("Factorial is not defined for negative numbers.\n");
else
printf("Factorial of %d = %d\n", num, factorial(num));
return 0;
}
// Recursive function definition
int factorial(int n) {
if (n == 0 || n == 1)
return 1; // Base case
else
return n * factorial(n - 1); // Recursive call
}