//Accept an int n from the user and display even number upto N

#include <stdio.h>
int main() {
int n, i;
// Input from user
printf("Enter a number: ");
scanf("%d", &n);
printf("Even numbers up to %d are:\n", n);
// Loop to print even numbers
for (i = 2; i <= n; i += 2) {
printf("%d ", i);
}
printf("\n");
return 0;
}