//program to accept n numbers in an array and display largest and smallest number of array.

#include <stdio.h>
int main() {
int n, i;
int largest, smallest;
// Input size of array
printf("Enter number of elements in the array: ");
scanf("%d", &n);
int arr[n];
// Input array elements
printf("Enter %d numbers:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
// Initialize largest and smallest
largest = smallest = arr[0];
// Find largest and smallest
for (i = 1; i < n; i++) {
if (arr[i] > largest)
largest = arr[i];
if (arr[i] < smallest)
smallest = arr[i];
}
// Display results
printf("Largest number in the array: %d\n", largest);
printf("Smallest number in the array: %d\n", smallest);
return 0;
}