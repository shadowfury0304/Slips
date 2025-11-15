//Program having menu with the following options... 1. Area of square 2. Area of rectangle

#include <stdio.h>
int main() {
int choice;
float side, length, breadth, area;
// Display menu
printf("Menu:\n");
printf("1. Area of Square\n");
printf("2. Area of Rectangle\n");
printf("Enter your choice (1 or 2): ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter side of square: ");
scanf("%f", &side);
area = side * side;
printf("Area of square = %.2f\n", area);
break;
case 2:
printf("Enter length and breadth of rectangle: ");
scanf("%f %f", &length, &breadth);
area = length * breadth;
printf("Area of rectangle = %.2f\n", area);
break;
default:
printf("Invalid choice!\n");
}
return 0;
}