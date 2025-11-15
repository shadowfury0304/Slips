//program to check whether number is even or odd using function call.

#include <stdio.h>
// Function declaration
void checkEvenOdd(int n);
int main() {
int num;
// Input a number
printf("Enter a number: ");
scanf("%d", &num);
// Function call
checkEvenOdd(num);
return 0;
} 
// Function definition
void checkEvenOdd(int n) {
if (n % 2 == 0)
printf("%d is even.\n", n);
else
printf("%d is odd.\n", n);
}
