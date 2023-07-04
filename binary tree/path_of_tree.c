
// PATH OF TREE
#include<stdio.h> #include<stdlib.h>
struct node
{
int data;
struct node* left; struct node* right;
};
void printarr(int arr[], int len)
{
int i;
for (i=0; i<len; i++)
{ printf("%d ", arr[i]); } printf("\n");
}
void pathrec(struct node* temp, int path[], int pathlen)
{
if (temp== NULL)
return;
path[pathlen] = temp->data; pathlen++;
if (temp->left==NULL && temp->right==NULL)
{
printarr(path, pathlen);
} else
{
pathrec(temp->left, path, pathlen);
pathrec(temp->right, path, pathlen); }
}
void path(struct node* temp)
{
int path[1000];
pathrec(temp, path, 0); }
struct node* newnode(int data)
{
struct node* temp = (struct node*) malloc(sizeof(struct node)); temp->data = data;
temp->left = NULL;
temp->right = NULL;
return (temp);
}
struct node* insert(struct node* temp, int val)
{
if (temp == NULL)
{ return (newnode(val)); }
if (val < temp->data)
temp->left = insert(temp->left, val); else if (val > temp->data)
temp->right = insert(temp->right, val);
else
return temp;
return temp; }
int main()
// Duplication in BST is not allowed
{
struct node *root = NULL; root= insert(root, 50); root= insert(root, 67); root= insert(root, 60); root= insert(root, 42); root= insert(root, 30); root= insert(root, 18); root= insert(root, 34); root= insert(root, 14); root= insert(root, 11); root= insert(root, 35); root= insert(root, 32); root= insert(root, 47); root= insert(root, 71); root= insert(root, 68); root= insert(root, 49); path(root);
return 0;
}
