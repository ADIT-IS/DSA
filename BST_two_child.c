
// BST WITH TWO CHILD NODE
#include<stdio.h> #include<stdlib.h>
// Node for Binary Search Tree construction struct node
{
int data;
struct node *left, *right; };
int count= 0;
// Function to create node struct node* newnode(int val)
{
struct node* temp = (struct node*)malloc(sizeof(struct node)); temp->data = val;
temp->left = NULL;
temp->right = NULL;
return (temp);
}
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
// FUNCTION to print the INORDER traveersal of AVL tree void nochild(struct node *root)
{
if(root!= NULL)
{
nochild(root->left);
// Condition for nodes with no child if((root->left!= NULL && root->right!= NULL)) { printf("%d ", root->data);
count++; }
nochild(root->right); }
}
/* Driver program to test above function*/ int main()
{
struct node *root = NULL; root= insert(root, 63); root= insert(root, 70); root= insert(root, 52); root= insert(root, 55); root= insert(root, 59); root= insert(root, 40); root= insert(root, 35); root= insert(root, 17); root= insert(root, 85); root= insert(root, 56); root= insert(root, 75); root= insert(root, 71);
nochild(root);
printf("\nNumber of 2-child parent nodes: %d", count); return 0;
}
