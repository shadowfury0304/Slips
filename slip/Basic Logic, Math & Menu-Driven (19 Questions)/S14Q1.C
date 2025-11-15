//C program to accept integer and count number of digit in the number.

#include <stdio.h>
int main() {
int num, count = 0;
// Input number
printf("Enter an integer: ");
scanf("%d", &num);
// Handle 0 separately (since it has 1 digit)
if (num == 0) {
count = 1;
} else {
// Convert negative numbers to positive
if (num < 0)
num = -num;
// Count digits
while (num != 0) {
num = num / 10;
count++;
}
}
printf("Number of digits = %d\n", count);
return 0;
}