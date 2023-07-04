// QUEUE USING LINKED LIST
#include<stdio.h> #include<stdlib.h>
struct node
{
int data;
struct node *next;
}*front= NULL, *rear= NULL;
void enqueue(int val)
{
struct node *temp = malloc(sizeof(struct node)); temp->data = val;
temp->next = NULL;
if(front == NULL && rear == NULL)
{
front = rear = temp;
} else
{
rear->next = temp;
rear = temp; }
}
void dequeue()
{
struct node *temp; if(front == NULL)
printf("Queue Underflow.\n"); else
{
printf("The element deleted is %d \n", front->data); temp = front;
front = front->next;
if(front == NULL)
{
rear = NULL; }
free(temp); }
}
void disp()
{
struct node *temp = front;
printf("The elements in the Queue are "); while(temp)
{
printf("%d ",temp->data);
temp = temp->next; }
}
int main()
{
int val, choice; do
{
scanf("%d", &choice); switch(choice)
{
case 1:
scanf("%d", &val); enqueue(val); break;
case 2: dequeue(); break;
case 3: disp();
break; case 4:
break; default:
printf("Invalid input.");
break; }
}while(choice!=4);
return 0; }
