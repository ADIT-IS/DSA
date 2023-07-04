// KTH MIN AND MAX
#include<stdio.h> #include<stdlib.h>
// Node for Binary Search Tree construction
 struct node {
int data;
struct node *left, *right; };
int count1=0, count2=0, arr[]= { 54, 67, 60, 43, 52, 74, 73, 69, 80, 35, 40, 37, 17, 5, 20, 42 };
// Function to create node struct node* newnode(int val) {
struct node* temp = (struct node*)malloc(sizeof(struct node)); temp->data = val;
temp->left = NULL;
temp->right = NULL;
return (temp); }
// Function to insert node to the tree
struct node* insert(struct node* temp, int val) {
if (temp == NULL)
{ return (newnode(val)); }
if (val < temp->data)
temp->left = insert(temp->left, val);
else if (val > temp->data)
temp->right = insert(temp->right, val);
else
return temp; // Duplication in BST is not allowed
return temp; }
// Function to find k’th minimum element void ksmall(struct node *root, int k)
{
if(root != NULL)

{
// For smaller element we start the traversal from left subtree
ksmall(root->left, k);
arr[count1++]= root->data; method
ksmall(root->right, k); }
}
// The element is stored in sorted array using inorder traversal
// Function to find k’th maximum element void klarge(struct node *root, int k)
{
if(root != NULL) {
// For larger element we start the traversal from right subtree klarge(root->right, k);
arr[count2++]= root->data;
klarge(root->left, k); }
}
int main() {
struct node *root = NULL; int i,k=3;
for(i=0; i<16; i++)
{
root= insert(root, arr[i]); }
// The element is stored in sorted array using inorder traversal method
ksmall(root, k); // The predefined value for k is 3 printf("%drd minimum is : %d", k, arr[2]); klarge(root, k); // The predefined value for k is 3 printf("\n%drd maximum is : %d", k, arr[2]);
return 0; }
