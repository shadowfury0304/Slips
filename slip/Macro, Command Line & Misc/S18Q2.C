// C program to find square and cube of a number using macro #define SQUARE(X) and #define CUBE(x

#include <stdio.h>
#define SQUARE(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))
int main() {
int num;
// Input number
printf("Enter a number: ");
scanf("%d", &num);
// Display square and cube
printf("Square of %d = %d\n", num, SQUARE(num));
printf("Cube of %d = %d\n", num, CUBE(num));
return 0;
}