// LINEAR SEARCH
#include <stdio.h>
int search(int arr[], int n, int val)
{
int i;
for (i = 0; i < n; i++)
{
if (arr[i] == val)
{ return i; } }
return -1; }
int main()
{
int arr[] = { 2, 3, 4, 10, 40 }, val = 10, n = sizeof(arr) / sizeof(arr[0]);
int result = search(arr, n, val);
(result == -1)? printf("Element is not present in array"): printf("Element is present at index %d", result); return 0;
}
