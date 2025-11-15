//Find sum of first 10 natural numbers.

#include <stdio.h>
int main() {
int i, sum = 0;
// Loop to add first 10 natural numbers
for (i = 1; i <= 10; i++) {
sum += i;
}
printf("Sum of first 10 natural numbers = %d\n", sum);
return 0;
}