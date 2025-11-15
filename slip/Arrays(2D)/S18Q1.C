//program to accept two matrices... add them, display resulting matrix

#include <stdio.h>
int main() {
int rows, cols;
int i, j;
// Input matrix dimensions
printf("Enter number of rows and columns: ");
scanf("%d %d", &rows, &cols);
int a[10][10], b[10][10], sum[10][10];
// Input elements of first matrix
printf("\nEnter elements of first matrix:\n");
for (i = 0; i < rows; i++) {
for (j = 0; j < cols; j++) {
printf("a[%d][%d]: ", i, j);
scanf("%d", &a[i][j]);
}
}
// Input elements of second matrix
printf("\nEnter elements of second matrix:\n");
for (i = 0; i < rows; i++) {
for (j = 0; j < cols; j++) {
printf("b[%d][%d]: ", i, j);
scanf("%d", &b[i][j]);
}
}
// Add matrices
for (i = 0; i < rows; i++) {
for (j = 0; j < cols; j++) {
sum[i][j] = a[i][j] + b[i][j];
}
}
// Display resulting matrix
printf("\nResultant Matrix (A + B):\n");
for (i = 0; i < rows; i++) {
for (j = 0; j < cols; j++) {
printf("%d\t", sum[i][j]);
}
printf("\n");
}
return 0;
}