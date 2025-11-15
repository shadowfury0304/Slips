//accept x and y co-ordinate of a point and find quadrant of which thr point lies

#include <stdio.h>
int main() {
float x, y;
// Input coordinates
printf("Enter x and y coordinates: ");
scanf("%f %f", &x, &y);
// Determine the quadrant
if (x > 0 && y > 0)
printf("Point (%.2f, %.2f) lies in the First Quadrant.\n", x, y);
else if (x < 0 && y > 0)
printf("Point (%.2f, %.2f) lies in the Second Quadrant.\n", x, y);
else if (x < 0 && y < 0)
printf("Point (%.2f, %.2f) lies in the Third Quadrant.\n", x, y);
else if (x > 0 && y < 0)
printf("Point (%.2f, %.2f) lies in the Fourth Quadrant.\n", x, y);
else if (x == 0 && y == 0)
printf("Point (%.2f, %.2f) is at the Origin.\n", x, y);
else if (x == 0)
printf("Point (%.2f, %.2f) lies on the Y-axis.\n", x, y);
else if (y == 0)
printf("Point (%.2f, %.2f) lies on the X-axis.\n", x, y);
return 0;
}