//STACK USING LINKED LIST
#include<stdio.h> #include<stdlib.h>
struct node
{
int data;
struct node *next; };
struct node *top= NULL;
void push(int val) {
 struct node *temp= malloc(sizeof(struct node)); temp->data = val;
temp->next = top;
top = temp;
}
void pop()
{
if (top == NULL)
{
printf("\nStack Underflow\n");
} else
{
printf("The element deleted is %d \n", top->data); struct node *temp = top;
top = top->next;
free(temp);
} }
void disp()
{
if (top == NULL)
{
printf("\nStack Underflow\n");
} else
{
printf("The elements in the stack are "); struct node *temp= top;
while (temp != NULL)
{
printf("%d ", temp->data);
temp = temp->next; }
} }
int main()
{
int val, choice; do
{
scanf("%d", &choice); switch(choice)
{
case 1:
scanf("%d", &val); push(val);
break;
case 2: pop();
break; case 3:
disp();
break; case 4:
break; default:

printf("Invalid input.");
break; }
}while(choice!=4);
return 0; }
