// write a program to accept integer using pointer and check even or odd

#include <stdio.h>
int main() {
int num;
int *ptr; // pointer to integer
// Make pointer point to variable num
ptr = &num;
// Accept number from user
printf("Enter an integer: ");
scanf("%d", ptr);
// Check even or odd using pointer
if (*ptr % 2 == 0)
printf("%d is Even.\n", *ptr);
else
printf("%d is Odd.\n", *ptr);
return 0;
}