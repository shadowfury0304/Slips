//write a program to find sum of diagonal elemts of matrix.

#include <stdio.h>
int main() {
int matrix[10][10];
int i, j, n, sum = 0;
// Accept order of square matrix
printf("Enter the size of square matrix (n x n): ");
scanf("%d", &n);
// Accept matrix elements
printf("Enter elements of the matrix:\n");
for (i = 0; i < n; i++) {
for (j = 0; j < n; j++) {
printf("Element [%d][%d]: ", i + 1, j + 1);
scanf("%d", &matrix[i][j]);
}
}
// Display the matrix
printf("\nMatrix:\n");
for (i = 0; i < n; i++) {
for (j = 0; j < n; j++) {
printf("%d\t", matrix[i][j]);
}
printf("\n");
}
// Calculate sum of diagonal elements
for (i = 0; i < n; i++) {
sum += matrix[i][i];
}
// Display result
printf("\nSum of diagonal elements = %d\n", sum);
return 0;
}