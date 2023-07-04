// BINARY SEARCH
#include <stdio.h>
int main()
{
int i, low, high, mid, n= 5, key= 10, array[5]= { 2, 3, 4, 10, 40 };
low = 0;
high = n - 1;
mid = (low+high)/2; while (low <= high) {
if(array[mid] < key) low = mid + 1;
else if (array[mid] == key)
{
printf("%d found at location %d", key, mid+1);
break; }
else
high = mid - 1;
mid = (low + high)/2; }
if(low > high)
printf("Not found! %d isn't present", key);
return 0; }


// BINARY SEARCH USING RECURSION
#include <stdio.h>
int iterate(int arr[], int start, int end, int ele)
{
while (start <= end)
{
int mid = start + (end- start )/2; if (arr[mid] == ele)
return mid;
if (arr[mid] < ele)
start= mid + 1; else
end= mid- 1; }
return -1; }
int main(void)
{
int arr[] = {1, 4, 7, 9, 16, 56, 70}; int n = 7;
int elem = 16;
int found = iterate(arr, 0, n-1, elem); if(found == -1 )
{
printf("Element not found in the array "); }
else {
printf("Element found at index : %d",found); }
return 0; }
