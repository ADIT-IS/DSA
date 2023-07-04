AVL TREE OPERATIONS
// ADITI SINGH 21BCE0349
#include<stdio.h> #include<stdlib.h>
// Node for AVL tree construction struct node
{
int data, height;
 struct node *left, *right; };
// Function to return maximum number int max(int val1, int val2)
{
return (val1 > val2)? val1 : val2;
}
// Function return height of the tree int height(struct node *temp)
{
if (temp == NULL)
{ return 0; }
return max(height(temp->left), height(temp->right))+ 1;
}
// Function to create node struct node* newnode(int val)
{
struct node* temp = (struct node*)malloc(sizeof(struct node));
temp->data = val;
temp->left = NULL;
temp->right = NULL;
temp->height = 0; // a new node does not have any height before connection return (temp);
}
// Functions to rotate when AVL is unbalanced struct node *rightrot(struct node *temp)
{
struct node *newroot = temp->left; struct node *turn = newroot->right;
// Rotation newroot->right = temp; temp->left = turn;
// New height
temp->height = height(temp); newroot->height = height(newroot);
// Return new root after balancing
return newroot; }
struct node *leftrot(struct node *temp)
{
struct node *newroot = temp->right; struct node *turn = newroot->left;
// Rotation newroot->left = temp; temp->right = turn;
// New height
temp->height = height(temp); newroot->height = height(newroot);

 // Return new root after balancing
return newroot; }
// Function to check balacing factor int bal(struct node *temp)
{
if (temp == NULL)
{ return 0; }
return height(temp->left) - height(temp->right);
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
temp->height = height(temp);
int balance = bal(temp);
// CASE for left side disbalance (R rotation) if (balance > 1 && val < temp->left->data)
return rightrot(temp);
// CASE for right side disbalance (L rotation) if (balance < -1 && val > temp->right->data)
return leftrot(temp);
// CASE for right of left disbalance (LR rotation) if (balance > 1 && val > temp->left->data)
{
temp->left = leftrot(temp->left);
return rightrot(temp); }
// CASE for left of right disbalance (RL rotation) if (balance < -1 && val < temp->right->data)
{
temp->right = rightrot(temp->right);
return leftrot(temp); }
return temp; }
struct node * min(struct node* node)
{
struct node* current = node; while (current->left != NULL)
current = current->left; return current;
}

 // Function to delete node
struct node* del(struct node* temp, int val) {
if (temp == NULL) return temp;
if (val < temp-> data )
temp->left = del(temp->left, val);
else if( val > temp->data )
temp->right = del(temp->right, val);
else
{
// Node with only one child or Node with no child
if( (temp->left == NULL) || (temp->right == NULL) ) {
struct node *tempo = temp->left ? temp->left : temp->right; // Node with NO child
if (tempo == NULL)
{
tempo = temp;
temp = NULL; }
else // Node with ONE child *temp = *tempo;
free(tempo); }
else
{
// Node with two children
struct node* tempo = min(temp->right); temp->data = tempo->data;
temp->right = del(temp->right, tempo->data);
} }
//Tree with only one node if (temp == NULL)
return temp;
temp->height = 1 + max(height(temp->left), height(temp->right));
int balance = bal(temp);
// CASE for left side disbalance (R rotation)
if (balance > 1 && val < temp->left->data) return rightrot(temp);
// CASE for right side disbalance (L rotation) if (balance < -1 && val > temp->right->data)
return leftrot(temp);
// CASE for right of left disbalance (LR rotation) if (balance > 1 && val > temp->left->data)
{
temp->left = leftrot(temp->left);
return rightrot(temp); }
// CASE for left of right disbalance (RL rotation) if (balance < -1 && val < temp->right->data)
{
temp->right = rightrot(temp->right);

return leftrot(temp); }
return temp; }
// FUNCITON to print the INORDER traveersal of AVL tree void inorder(struct node *root)
{
if(root != NULL)
{
inorder(root->left); printf("%d ", root->data); inorder(root->right);
} }
/* Driver program to test above function*/ int main()
{
struct node *root = NULL;
// Constructing an AVL tree root = insert(root, 35);
root = insert(root, 56);
root = insert(root, 23);
root = insert(root, 31); root = del(root, 62); root = insert(root, 47); root = insert(root, 48); root = insert(root, 12); root = del(root, 47); root = del(root, 56); root = insert(root, 50);
inorder(root);
return 0; }
