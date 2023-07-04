//MERGE TWO SORTED ARRAY
#include<stdio.h>
int arr1[20], arr2[20], m_arr[20];
void merge_arr(int n1, int n2)
{
int i=0, j=0, k=0;
while (i<n1 && j<n2)
{
// Adding element to merged sort if the element in first array is smaller and then the pointer gets
incremented by 1 if(arr1[i]<arr2[j])
{ m_arr[k++]= arr1[i++]; }
// Adding element to merged sort if the element in second array is smaller and then the pointer gets incremented by 1
else
{ m_arr[k++]= arr2[j++]; } }
while(i < n1) // To add left out elements in each array { m_arr[k++] = arr1[i++]; }
while(j < n2) // To add left out elements in each array { m_arr[k++] = arr2[j++]; }
for(k=0; k<n1+n2; k++)
{
printf("%d ", m_arr[k]);
} }
int main()
// To display the merged array elements
{
int i, n1, n2;
scanf("%d", &n1); // Size of 1st array scanf("%d", &n2); // Size of 2nd array
for(i=0; i<n1; i++)
{ scanf("%d", &arr1[i]); } for(i=0; i<n2; i++)
{ scanf("%d", &arr2[i]); } merge_arr(n1, n2);
return 0;
}
