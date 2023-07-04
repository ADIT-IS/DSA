//MERGE SORT
#include<stdio.h> int arr[50];
{
int val1= mid-low+1, val2= high-mid;
void merge(int low, int mid, int high)
//Sorting array int temp_arr1[val1], temp_arr2[val2], i, j, k;
for(i=0; i<val1; i++)
{
temp_arr1[i]= arr[low+i];
}
for(j=0; j<val2; j++)
{
temp_arr2[j]= arr[mid+j+1];
}
//Copying data of left side array //Copying data of right side array
// Recursively calling itself with updated value of partition index
//Merging of array elements back to array i=0; j=0; k=low;
while(i<val1 && j<val2)
{
if(temp_arr1[i]<=temp_arr2[j])
{ arr[k++]= temp_arr1[i++]; } // If the element of array before mid is smaller then the pointer is incremented and the value is stored in new array
else
{ arr[k++]= temp_arr2[j++]; } // If the element of array after mid is smaller then the pointer is incremented and the value is stored in new array
}
//Now adding the left out elements in the merged sort until the array is empty while(i<val1)
{ arr[k++]= temp_arr1[i++]; }
while(j<val2)
{ arr[k++]= temp_arr2[j++]; } }
void sort(int low, int high)
{
if(low<high)
{
int mid= low+ (high-low)/2;
sort(low, mid); sort(mid+1, high); merge(low, mid, high);
// Allocating mid every time the function is called. // To split and merge array before mid
// To split and merge array after mid // To sort array
} }
int main()
{
int n,i;
scanf("%d", &n); for(i=0;i<n;i++)
{
scanf("%d", &arr[i]);
}
sort(0,n-1); for(i=0;i<n;i++) {
printf("%d ", arr[i]); }
return 0; }
