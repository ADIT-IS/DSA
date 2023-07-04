LEVEL ORDER COUNTING LEAF NODES
 #include<stdio.h> #include<stdlib.h> struct node
{
int data;
struct node *left, *right; };
int count= 0;
void level(struct node* root, int lvl); int height(struct node* node);
struct node* newnode(int data);
/* Function to print level order traversal a tree*/ void lvlorder(struct node* root)
{
int h = height(root), i; for (i = 1; i <= h; i++)
level(root, i); }
/* Print nodes at a current level */ void level(struct node* root, int lvl)
{
if (root == NULL)
return;
if (lvl == 1)
printf("%d ", root->data); else if (lvl > 1) {
level(root->left, lvl - 1);
level(root->right, lvl - 1); }
}
int height(struct node* node)
{
if (node == NULL)
return 0; else {
/* compute the height of each subtree */ int lheight = height(node->left);
int rheight = height(node->right);
/* use the larger one */ if (lheight > rheight)
return (lheight + 1); else
return (rheight + 1); }
}
/* CREATE new node*/ struct node* newnode(int val)
{
struct node* node= (struct node*)malloc(sizeof(struct node)); node->data = val;
node->left = NULL;
node->right = NULL;
return (node);
}

void nochild(struct node *root)
{
if(root!= NULL)
{
nochild(root->left);
// Condition for nodes with no child if((root->left== NULL && root->right== NULL)) { printf("%d ", root->data);
count++; }
nochild(root->right); }
}
int main()
{
struct node* root = newnode(1); root->left = newnode(2); root->right = newnode(3); root->left->left = newnode(4); root->left->right = newnode(5); printf("Level Order traversal: \n"); lvlorder(root);
printf("\n");
nochild(root);
return 0;
}
