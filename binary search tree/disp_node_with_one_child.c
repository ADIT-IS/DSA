BST DISPLAY NODES WITH ONE CHILD
#include<stdio.h> #include<stdlib.h>
// Node for Binary Search Tree construction struct node
{
 int data;
struct node *left, *right; };
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
// FUNCTION to print the INORDER traveersal of AVL tree void onechild(struct node *root)
{
if(root!= NULL) {
onechild(root->left);
// Condition for nodes with single child

if((root->left== NULL && root->right!= NULL) || (root->right== NULL && root->left!=NULL)) { printf("%d ", root->data); }
onechild(root->right);
} }
/* Driver program to test above function*/ int main()
{
struct node *root = NULL; root= insert(root, 50); root= insert(root, 67); root= insert(root, 60); root= insert(root, 42); root= insert(root, 30); root= insert(root, 18); root= insert(root, 34); root= insert(root, 14); root= insert(root, 11); root= insert(root, 35); root= insert(root, 32); root= insert(root, 47); root= insert(root, 71); root= insert(root, 68); root= insert(root, 49);
onechild(root);
return 0; }
