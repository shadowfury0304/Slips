//program to find factorial of a number using recursion.

#include <stdio.h>
// Function declaration
long long factorial(int n);
int main() {
int num;
long long fact;
// Input a number
printf("Enter a number: ");
scanf("%d", &num);
// Check for negative numbers
if (num < 0)
printf("Factorial is not defined for negative numbers.\n");
else {
fact = factorial(num);
printf("Factorial of %d = %lld\n", num, fact);
}
return 0;
}
// Recursive function to calculate factorial
long long factorial(int n) {
if (n == 0 || n == 1)
return 1; // Base case
else
return n * factorial(n - 1); // Recursive call
}