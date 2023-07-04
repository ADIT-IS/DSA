//STACK USING ARRAY
#include<stdio.h>
int s_arr[50], top=-1,size;
void push (int val)
{
if(top== size-1)
{
printf("Stack is overloaded.");
} else
{
s_arr[++top]= val;
} }
void pop()
{
if(top==-1)
{
printf("Stack underflow.");
} else
{
printf("\nThe element deleted is %d", s_arr[top--] );
} }
void disp()
{
int temp;
printf("\nThe elements in the stack are "); for(temp=top;temp>-1; temp--)
{
printf("%d ", s_arr[temp]);
} }
int main()
{
int choice,val;
scanf("%d", &size);
printf("Size of the stack is %d", size);
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
