QUEUE USING ARRAY
#include<stdio.h>
int s_arr[50], front=-1,rear =-1, size;
void push (int val)
{
if(front== size-1)
{
printf("Queue is overloaded.");
} else
{
if(front==-1)
{
front++;
}
s_arr[++rear]= val; }
}
void pop()
{
if(rear==-1 || front>rear)
{
printf("Queue underflow.");
} else
{
printf("\nThe element deleted is %d", s_arr[front++] );
} }
void disp()
{
int temp;
printf("\nThe elements in the Queue are "); for(temp=front;temp<=rear; temp++)
{
printf("%d ", s_arr[temp]);
} }
int main()
{
int choice,val;
scanf("%d", &size);
printf("Size of the Queue is %d", size);
do {
scanf("%d", &choice);
switch(choice)
{
case 1:
scanf("%d", &val); push(val);
break;
case 2: pop();
break; case 3:
disp();
break; case 4:
break; default:
printf("Input invalid.");
break; }
}while(choice!=4);
return 0; }
