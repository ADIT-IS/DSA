// INFIX TO POSTFIX
#include<stdio.h>
char st_arr[50]; int top=-1;
void push(char val)
{
st_arr[++top]= val;
}
// function to push element into stack and increment the top by 1
char pop()
{
if(top==-1)
{
return -1;
} else
{
return st_arr[top--];
} }
// function to pop stack elements, it pops an element and returns the element to the expression
// if the stack is empty then it returns a negative value to indicate no more element can be popped.
int condition(char val)
{
if (val== '(')
{
return 0;
}
// condition to inform no more popping can be performed if(val== '+' || val=='-')
{
return 1; }
if (val=='*' || val== '/')
{
return 2;
}
return 0; }
//function to check condition if popping can be performed.
int main()
{
char input[50]; char *p, val;
scanf("%s",input); p = input;
while(*p != '\0') {
if((*p>'A' && *p<='Z') || (*p>='a' && *p<='z'))
{ printf("%c ",*p); }
// if the element is an alphabet then it directly gets printed into the postfix expression
else if(*p == '(')
{ push(*p); }
// element is pushed into stack if the elements is '('
else if(*p == ')')
{
while((val = pop()) != '(')
{
printf("%c ", val);
} }
// if end of ')' is encountered then the stack pops element until it encounters '(' else
{
while(condition(st_arr[top]) >= condition(*p))
{
printf("%c ",pop());
}
// Condition that states that if the element in stack has higher or same precedence as the element then stack should be popped.
push(*p); }
//else condition to check if the the value in stack has higher priority than the element pushed.
//if the element in stack has higher precedence then it is popped and returned to postfix expression p++;
}
while(top != -1)
{
printf("%c ",pop());
}
// condition to empty all elements of stack return 0;
}
