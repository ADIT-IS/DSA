// POSTFIX EVALUATION
#include<stdio.h> #include<string.h>
int st_arr[50],top =-1; char input[50];
void push(int val)
{
st_arr[++top] = val;
}
// function to push elements into stack.
int pop()
{
return st_arr[top--];
}
// function to pop elements from stack when an operator is encountered.
int main()
{
int ele1, ele2, val, len, i;
fgets(input, 50,stdin); len= strlen(input);
for(i=0; i<len;i++)
{
if (input[i]<='9' && input[i]>='0')
{
push(input[i]-48);
}
// condition to push element if it is an operand. else if(input[i]== ' ')
{
continue; }
else
{
ele1 = pop(); ele2 = pop(); switch(input[i]) {
case '+':
val = ele1 + ele2; break;
case '-':
val = ele2 - ele1; break;
case '*':
val = ele1 * ele2; break;
case '/':
val = ele2 / ele1; break;
}
push(val); }
}
printf("%d", st_arr[top]);
// To pop the last element in stack to obtain the evaluated value of postfix expression return 0;
}
