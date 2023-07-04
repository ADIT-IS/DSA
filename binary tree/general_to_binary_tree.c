// GENERAL TREE TO BINARY
#include <stdio.h> #include <stdlib.h> struct node
{
int data;
struct node *left; struct node *right;
};
struct node *root = NULL; int treeArray[100];
int ind = 0;
struct node* createNode(int data)
{
struct node *newNode = (struct node*)malloc(sizeof(struct node)); newNode->data= data;
 newNode->left = NULL; newNode->right = NULL; return newNode;
}
int calculateSize(struct node *node)
{
int size = 0;
if (node == NULL)
return 0; else
{
size = calculateSize (node->left) + calculateSize (node->right) + 1;
return size; }
}
void convertBTtoArray(struct node *node)
{
if(root == NULL)
{
printf("Tree is empty\n");
return; }
else
{
if(node->left != NULL)
convertBTtoArray(node->left); treeArray[ind] = node->data; ind++;
if(node->right!= NULL)
convertBTtoArray(node->right); }
}
struct node* createBST(int start, int end)
{
if (start > end)
{
return NULL;
}
int mid = (start + end) / 2;
struct node *temp = createNode(treeArray[mid]);
temp->left = createBST(start, mid - 1);
temp->right = createBST(mid + 1, end);
return temp; }
struct node* convertBST(struct node *node)
{
int treeSize = calculateSize(node); convertBTtoArray(node);
int compare (const void * a, const void * b)
{
return ( *(int*)a - *(int*)b );
}
qsort(treeArray, treeSize, sizeof(int), compare);
struct node *d = createBST(0, treeSize - 1);
return d; }

void inorder(struct node *node)
{
if(root == NULL)
{
printf("Tree is empty\n");
return; }
else
{
if(node->left!= NULL)
inorder(node->left); printf("%d ", node->data); if(node->right!= NULL)
inorder(node->right); }
}
int main()
{
root = createNode(1);
root->left = createNode(2); root->right = createNode(3); root->left->left = createNode(4); root->left->right = createNode(5); root->right->left = createNode(6); root->right->right = createNode(7);
printf("Inorder representation of binary tree: \n");
inorder(root);
struct node *bst = convertBST(root);
printf("\nInorder representation of resulting binary search tree: \n"); inorder(bst);
return 0; }
