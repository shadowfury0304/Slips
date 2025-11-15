//Display multiplication tables from a given starting number to a given ending number having "n" multiples each

#include <stdio.h>
int main() {
int start, end, n;
// Input range and number of multiples
printf("Enter starting number: ");
scanf("%d", &start);
printf("Enter ending number: ");
scanf("%d", &end);
printf("Enter number of multiples (n): ");
scanf("%d", &n);
printf("\nMultiplication Tables from %d to %d (each with %d multiples):\n\n", start, end, n);
// Generate tables
for (int i = start; i <= end; i++) {
printf("Table of %d:\n", i);
for (int j = 1; j <= n; j++) {
printf("%d x %d = %d\n", i, j, i * j);
}
printf("\n"); // Blank line between tables
}
return 0;
}