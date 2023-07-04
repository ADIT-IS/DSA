
// QUICK SORT USING RANDOM PIVOT
#include <stdio.h> #include <stdlib.h> #include <time.h>
int partition(int arr[], int low, int high)
{
int pivot = arr[low];
int i = low - 1, j = high + 1;
while (1)
{
do
{
i++;
} while (arr[i] < pivot);
do {
j--;
} while (arr[j] > pivot);
if (i >= j) return j;
int temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
} }
int parti(int arr[], int low, int high)
{
srand(time(0));
int random = low + rand() % (high - low);
int temp = arr[random]; arr[random] = arr[low]; arr[low] = temp;
return partition(arr, low, high); }
void quick(int arr[], int low, int high)
{
if (low < high)
{
int pi = parti(arr, low, high);
quick(arr, low, pi);
quick(arr, pi + 1, high); }
}
void print(int arr[], int n)
{
for (int i = 0; i < n; i++)
printf("%d ", arr[i]); printf("\n");
}
int main()
{
int arr[] = { 10, 7, 8, 9, 1, 5 };
int n = sizeof(arr) / sizeof(arr[0]); quick(arr, 0, n - 1);
printf("Sorted array: \n"); print(arr, n);
return 0;
}
#include <stdio.h>
/* Function to sort an array using insertion sort*/ void insertion(int arr[], int n)
{
int i, key, j;
for (i = 1; i < n; i++) {
key = arr[i];
j = i - 1;
while (j >= 0 && arr[j] > key) {
arr[j + 1] = arr[j];
j = j - 1; }
arr[j + 1] = key; }
}
void print(int arr[], int n)
{
int i;
for (i = 0; i < n; i++) printf("%d ", arr[i]);
printf("\n"); }
int main()
{
int arr[] = { 12, 11, 13, 5, 6 };
int n = sizeof(arr) / sizeof(arr[0]);
insertion(arr, n); print(arr, n);
return 0; }
