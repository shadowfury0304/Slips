//C program to accept an integer and check whether its prime or not.

#include <stdio.h>
int main() {
int n, i, flag = 0;
// Input number
printf("Enter an integer: ");
scanf("%d", &n);
// Handle numbers less than 2
if (n <= 1) {
printf("%d is not a prime number.\n", n);
return 0;
}
// Check divisibility from 2 to n/2
for (i = 2; i <= n / 2; i++) {
if (n % i == 0) {
flag = 1;
break;
}
}
// Display result
if (flag == 0)
printf("%d is a prime number.\n", n);
else
printf("%d is not a prime number.\n", n);
return 0;
}