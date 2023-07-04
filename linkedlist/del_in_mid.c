// DELETE IN MIDDLE OF LIST
#include <stdio.h> 
#include <stdlib.h>
/* Link list Node */ typedef struct Node 
{
  int data;
  struct Node* next; 
} Node;
// count of nodes
int countOfNodes(Node* head)
{
int count = 0;
while (head != NULL) {
head = head->next;
count++; }
return count; }
// Deletes middle node and returns // head of the modified list
Node* deleteMid(Node* head)
{
// Base cases
if (head == NULL)
return NULL;
if (head->next == NULL) {
free(head);
return NULL; }
Node* copyHead = head;
// Find the count of nodes
int count = countOfNodes(head); // Find the middle node
int mid = count / 2;
// Delete the middle node
head = head->next;
// Delete the middle node head->next = head->next->next; return copyHead;
}
// A utility function to print // a given linked list
void printList(Node* ptr) {
while (ptr != NULL) { printf("%d ->", ptr->data); ptr = ptr->next;
// Move to next node
} }
}
}
printf("NULL\n"); }
// Utility function to create a new node. Node* newNode(int data)
{
Node* temp = (Node*)malloc(sizeof(Node)); temp->data = data;
temp->next = NULL;
return temp;
}
/* Driver program to test above function*/ int main()
{
/* Start with the empty list */
Node* head = newNode(1);
head->next = newNode(2); head->next->next = newNode(3); head->next->next->next = newNode(4);
printf("Given Linked List\n");
printList(head);
head = deleteMid(head);
printf("Linked List after deletion of middle\n"); printList(head);
return 0; }
