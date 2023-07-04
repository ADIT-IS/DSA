// DELETION IN BST
#include<stdio.h> #include<stdlib.h>
// Node for Binary Search Tree construction struct node
{
int data;
 struct node *left, *right; };
// Function to create node struct node* newnode(int val)
{
struct node* temp = (struct node*)malloc(sizeof(struct node)); temp->data = val;
temp->left = NULL;
temp->right = NULL;
return (temp);
}
// Function to insert node to the tree
struct node* insert(struct node* temp, int val)
{
if (temp == NULL)
{ return (newnode(val)); }
if (val < temp->data)
temp->left = insert(temp->left, val);
else if (val > temp->data)
temp->right = insert(temp->right, val);
else
return temp; // Duplication in BST is not allowed
return temp; }
// Function for inorder traversal void inorder(struct node* root)
{
if (root != NULL)
{
inorder(root->left); printf("%d ", root->data); inorder(root->right);
} }
struct node* min(struct node* node)
{
struct node* current = node;
// Leftmost elem
while (current && current->left != NULL) { current = current->left; }
return current;
}
struct node* del(struct node* root, int val)
{
// base case
if (root == NULL)
return root;
// If the key is smaller than root if (val < root->data)
root->left = del(root->left, val);

// If the key is greater than root else if (val > root->data)
root->right = del(root->right, val);
// if key is dame as val else {
// node with only one child or no child if (root->left == NULL)
{
struct node* temp = root->right; free(root);
return temp;
}
else if (root->right == NULL)
{
struct node* temp = root->left; free(root);
return temp;
}
// Two child
struct node* temp = min(root->right);
// Copy Inorder successor
root->data = temp->data;
// Delete inorder successor
root->right = del(root->right, temp->data);
}
return root; }
/* Driver program to test above function*/ int main()
{
struct node *root = NULL; root= insert(root, 63); root= insert(root, 70); root= insert(root, 52); root= insert(root, 55); root= insert(root, 59); root= insert(root, 40); root= insert(root, 35); root= insert(root, 17); root= insert(root, 85); root= insert(root, 56); root= insert(root, 75); root= insert(root, 71);
inorder(root); printf("\n");
root= del(root, 85); inorder(root); printf("\n");
root= del(root, 63); inorder(root); return 0;
}
