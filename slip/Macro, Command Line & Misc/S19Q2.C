// C program to define value of Pi and use it to find area and parameter of cirecle (circumference).

#include <stdio.h>
#define PI 3.14159 // Define constant value of Pi
int main() {
float radius, area, circumference;
// Accept radius from user
printf("Enter the radius of the circle: ");
scanf("%f", &radius);
// Calculate area and circumference
area = PI * radius * radius;
circumference = 2 * PI * radius;
// Display results
printf("Area of Circle = %.2f\n", area);
printf("Circumference of Circle = %.2f\n", circumference);
return 0;
}