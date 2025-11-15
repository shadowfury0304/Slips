// Write a program to accept two integers as command line arhument and find the maximum, average of thw two integers.

#include <stdio.h>
#include <stdlib.h> // for atoi() function
int main(int argc, char *argv[]) {
int num1, num2, max;
float avg;
// Check if exactly 2 arguments are given (excluding program name)
if (argc != 3) {
printf("Usage: %s <num1> <num2>\n", argv[0]);
return 1;
}
// Convert command line arguments to integers
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
// Find maximum
if (num1 > num2)
max = num1;
else
max = num2;
// Calculate average
avg = (num1 + num2) / 2.0;
// Display results
printf("First number: %d\n", num1);
printf("Second number: %d\n", num2);
printf("Maximum = %d\n", max);
printf("Average = %.2f\n", avg);
return 0;
}