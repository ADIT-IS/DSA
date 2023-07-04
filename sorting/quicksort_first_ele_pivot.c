QUICK SORT WITH 1ST AS PIVOT
#include<stdio.h> #include<string.h>
char arr[50];
int parti(int, int); void quick_s(int, int);
int main()
{
int low=0,i;
char temp; scanf("%s",arr);
int high= strlen(arr);
quick_s(low, high);
for(i=0; i<strlen(arr)/2; i++)
{
temp= arr[i];
arr[i]= arr[strlen(arr)-i-1]; arr[strlen(arr)-i-1]= temp;
} printf("%s",arr); return 0;
}
// To input string
// Calling quick with original value // Reverse the string
// To add partition to the array
int parti(int low, int high)
{
int i= high,j;
char pivot= arr[low], temp;
for(j= high; j>low; j--)
{
if(arr[j]< pivot)
{
temp= arr[j]; arr[j]=arr[i]; arr[i]= temp; i--;
} }
temp= arr[low]; arr[low]= arr[i]; arr[i]=temp; return i;
}
void quick_s(int low, int high)
// To swap values of pivot and last element
{
int p_i;
if(low < high)
{
p_i= parti(low, high); quick_s(low, p_i-1); quick_s(p_i+1,high);
} }
