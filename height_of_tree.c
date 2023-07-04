// HEIGHT OF TREE
#include<stdio.h> #include<stdlib.h> struct node
{
 int data;
struct node* left; struct node* right;
};
int max(struct node* temp)
{
if (temp== NULL) { return 0; } else
{
int l = max(temp->left); int r = max(temp->right); /* use the larger one */
if (l > r)
return (l + 1); else
return (r + 1); }
}
struct node* newnode(int val)
{
struct node* temp= (struct node*) malloc(sizeof(struct node)); temp->data = val;
temp->left = NULL;
temp->right = NULL;
return (temp);
}
struct node* insert(struct node* temp, int val)
{
if (temp == NULL)
{ return (newnode(val)); }
if (val < temp->data)
temp->left = insert(temp->left, val);
else if (val > temp->data)
temp->right = insert(temp->right, val);
else
return temp;
return temp; }
int main()
// Duplication in BST is not allowed
{
struct node *root = NULL; root= insert(root, 50); root= insert(root, 67); root= insert(root, 60); root= insert(root, 42); root= insert(root, 30); root= insert(root, 18); root= insert(root, 34); root= insert(root, 14); root= insert(root, 11); root= insert(root, 35); root= insert(root, 32); root= insert(root, 47);

root= insert(root, 71);
root= insert(root, 68);
root= insert(root, 49);
printf("Height of tree is %d", max(root)); return 0;
}
