//MIN PRIORITY QUEUE HEAP
#include <stdio.h>
// Function to swap two elements void swap(int *no1, int *no2)
{
int temp = *no1; *no1 = *no2; *no2 = temp;
}
// Function to give priority to minimum element in a heap void min_heapify(int a[], int n, int i)
{
int low = i;
int left = 2*i + 1;
int right = 2*i + 2;
if (left < n && a[low] > a[left])
low= left;
if (right < n && a[low] > a[right])
low= right; if (low != i)
{
swap(&a[i], &a[low]);
min_heapify(a, n, low); }
}
// Function to display all elements of heap void disp(int arr[], int n)
{
int i = 0;
for (i = 0; i < n; i++)
{ printf("%d ", arr[i]); }
}
int main()
{
int n=12,i,temp;
int a[12]= { 12, 45, 34, 23, 52, 30, 11, 7, 5, 63, 17, 39}; for (i = n/2; i >= 0; i--)
{ min_heapify(a, n, i); }
// Sort in ascending order. for (i = n-1; i >0; i--)
{
swap(&a[0], &a[i]);
min_heapify(a, i, 0); }
for(int i = 0; i<n/2; i++)
{
temp = a[i];
a[i] = a[n-i-1]; a[n-i-1] = temp;
}
disp(a, n);
// parent index // left index
// right index
return 0; }
