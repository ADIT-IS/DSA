// SIZE OF BST
#include <stdio.h> #include <stdlib.h>
struct node
{
int data;
struct node* left;
struct node* right; };
struct node* newnode(int val) {
struct node* node = (struct node*) malloc(sizeof(struct node)); node->data = val;
node->left = NULL;
node->right = NULL;
return(node); }
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
int size(struct node* node)
{
if (node==NULL)
return 0; else
return(size(node->left) + 1 + size(node->right)); }
int main()
{
struct node *root = NULL; int s=0;
root = insert(root, 35); root = insert(root, 56); root = insert(root, 23); root = insert(root, 31); root = insert(root, 47); root = insert(root, 48); root = insert(root, 12); root = insert(root, 50);
s= size(root);
printf("%d", s);
return 0;
}
