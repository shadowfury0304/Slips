//Write a program, which accepts annual basic salary... and calculates and displays the Income tax as per the following rules.

#include <stdio.h>
int main() {
float basic, tax;
// Input annual basic salary
printf("Enter annual basic salary: ");
scanf("%f", &basic);
// Calculate tax based on rules
if (basic < 150000)
tax = 0;
else if (basic <= 300000)
tax = 0.20 * (basic - 150000);
else
tax = (0.20 * 150000) + (0.30 * (basic - 300000));
// Display the result
printf("Income Tax = %.2f\n", tax);
return 0;
}