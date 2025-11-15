//program to read two integer having ponters and perform all arithmetic operations.


#include <stdio.h>
int main() {
int a, b;
int *p1, *p2; // Pointers to store the addresses of a and b
// Input two integers
printf("Enter two integers:\n");
scanf("%d %d", &a, &b);
// Assign addresses to pointers
p1 = &a;
p2 = &b;
// Perform arithmetic operations using pointers
printf("\nResults using pointers:\n");
printf("Addition: %d + %d = %d\n", *p1, *p2, *p1 + *p2);
printf("Subtraction: %d - %d = %d\n", *p1, *p2, *p1 - *p2);
printf("Multiplication: %d * %d = %d\n", *p1, *p2, *p1 * *p2);
if (*p2 != 0) { // Avoid division by zero
printf("Division: %d / %d = %.2f\n", *p1, *p2, (float)(*p1) / (*p2));
printf("Modulus: %d %% %d = %d\n", *p1, *p2, *p1 % *p2);
} else {
printf("Division and modulus not possible (division by zero).\n");
}
return 0; }