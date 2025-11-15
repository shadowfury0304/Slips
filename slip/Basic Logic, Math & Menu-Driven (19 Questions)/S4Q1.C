//C program to find the largest number among three numbers using if else

#include <stdio.h>
int main() {
int a, b, c;
// Input three numbers
printf("Enter three numbers: ");
scanf("%d %d %d", &a, &b, &c);
// Compare using if-else
if (a >= b && a >= c)
printf("Largest number = %d\n", a);
else if (b >= a && b >= c)
printf("Largest number = %d\n", b);
else
printf("Largest number = %d\n", c);
return 0;
}