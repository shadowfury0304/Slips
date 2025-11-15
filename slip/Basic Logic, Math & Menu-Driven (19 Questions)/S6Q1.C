//C program to find smallest number among three numbers using if-else

#include <stdio.h>
int main() {
int a, b, c;
// Input three numbers
printf("Enter three numbers: ");
scanf("%d %d %d", &a, &b, &c);
// Compare using if-else
if (a <= b && a <= c)
printf("Smallest number = %d\n", a);
else if (b <= a && b <= c)
printf("Smallest number = %d\n", b);
else
printf("Smallest number = %d\n", c);
return 0;
}