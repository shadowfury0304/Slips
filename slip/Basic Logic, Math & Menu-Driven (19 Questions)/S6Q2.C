//A cashier has currency notes of denomination 1, 5 and 10. Accept the amount to be withdrawn... and print the total number of currency notes

#include <stdio.h>
int main() {
int amount;
int tens, fives, ones;
// Input the amount
printf("Enter the amount to withdraw: ");
scanf("%d", &amount);
// Calculate number of 10, 5, and 1 rupee notes
tens = amount / 10;
amount = amount % 10;
fives = amount / 5;
amount = amount % 5;
ones = amount;
// Display result
printf("\nCurrency distribution:\n");
printf("10 rupee notes: %d\n", tens);
printf("5 rupee notes: %d\n", fives);
printf("1 rupee notes: %d\n", ones);
return 0;
}