//store 10 numbers in array (print all the numbers)

#include <stdio.h>
int main() {
int numbers[10];
int i;
// Input 10 numbers
printf("Enter 10 numbers:\n");
for(i = 0; i < 10; i++) {
printf("Number %d: ", i + 1);
scanf("%d", &numbers[i]);
}
// Print all numbers
printf("\nThe numbers you entered are:\n");
for(i = 0; i < 10; i++) {
printf("%d ", numbers[i]);
}
printf("\n");
return 0;
}