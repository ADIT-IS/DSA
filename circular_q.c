// CIRCULAR QUEUE
#include<stdio.h> #include<stdlib.h> #define SIZE 5
int items[SIZE], front= -1, rear= -1;
int isFull()
{
if((front==rear+1) || (front==0 && rear== (SIZE-1))) { return 1; }
return 0;
}
int isEmpty()
{
if(front== -1)
{ return 1; } return 0;
}
void enq(int val)
{
if(isFull()==1)
{ printf("\nQueue is full"); else
{
if(front== -1) { front= 0;
rear= 0; }
else
{ rear= (rear+1) % SIZE; items[rear]= val;
}
}
} }
int deq()
{
int val;
if(isEmpty()==1)
{
printf("\nEmpty Queue");
return -1; }
else
{
val= items[front]; if(front==rear)
{
front= -1;
rear= -1; }
else
{
front= (front+1) %SIZE;
return val; }
} }
void disp()
{
int temp;
if (isEmpty())
{ printf("\nEmpty"); } else
{
printf("\nItems->");
for(temp= front; temp!=rear; temp= (temp+1) %SIZE) { printf("%d", items[temp]); }
} }
int main()
{
enq(1);
disp(); enq(2); disp(); enq(3); disp(); enq(4); disp(); enq(5); disp(); deq(); disp();
}
