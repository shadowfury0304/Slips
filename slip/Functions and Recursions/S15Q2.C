//C program that defines a function max which accepts three integers as paramteers and returns the maximum number...

#include <stdio.h>
// Function declaration
int max(int a, int b, int c);
int main() {
int num1, num2, num3, maximum;
// Input three numbers
printf("Enter three integers: ");
scanf("%d %d %d", &num1, &num2, &num3);
// Function call
maximum = max(num1, num2, num3);
// Display result
printf("The maximum number is: %d\n", maximum);
return 0;
}
// Function definition
int max(int a, int b, int c) {
int largest = a;
if (b > largest)
largest = b;
if (c > largest)
largest = c;
return largest;
}