// C program to find maximum from two integers using pointer.

#include <stdio.h>
int main() {
int a, b;
int *p1, *p2;
// Assign addresses to pointers
p1 = &a;
p2 = &b;
// Accept input from user
printf("Enter first number: ");
scanf("%d", p1);
printf("Enter second number: ");
scanf("%d", p2);
// Compare using pointer dereference
if (*p1 > *p2)
printf("Maximum number is: %d\n", *p1);
else if (*p2 > *p1)
printf("Maximum number is: %d\n", *p2);
else
printf("Both numbers are equal.\n");
return 0;}