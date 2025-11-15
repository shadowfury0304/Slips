//Program to read price of an item in decimal form and print the output in paise.

#include <stdio.h>
int main() {
float price;
int paise;
// Input price in rupees
printf("Enter the price of the item in rupees: ");
scanf("%f", &price);
// Convert to paise
paise = price * 100;
// Display result
printf("Price in paise: %d\n", paise);
return 0;
}