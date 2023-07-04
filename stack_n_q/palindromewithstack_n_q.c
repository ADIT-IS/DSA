//TO CHECK PALINDROME USING STACK AND QUEUE 
#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
char st[30], q[30], word[30]; int top= -1, front= -1, rear= -1;
void insertion (char val)
{
// PUSHING STRING ARRAY INTO STACK st[++top]= val;
printf("\n%c pushed", val);
// INSERTING STRING ARRAY INTO QUEUE if(front==-1)
{
front++;
}
q[++rear]= val; printf("\t%c inserted", val);
}
int deletion()
{
// POPPING ELEMENTS FROM STACK TO CHECK PALINDROME (LAST IN FIRST OUT
METHOD)
printf("\nElement popped is %c", st[top] );
// DELETING ELEMENTS FROM STACK FROM FRONT TO CHECK PALINDROME (FIRST IN
FIRST OUT METHOD)
printf(", \tElement deleted is %c", q[front] );
// To compare the deleted elements. if(st[top--]== q[front++])
{
return 1;
} else
{
return 0;
} }
// FUNCTION TO ENTER A WORD TO CHECK PALINDROME void input()
{
int i;
printf("\nEnter a word: ");
scanf("%s", word);
printf("Inserting %s into STACK and QUEUE.", word); for(i=0; i<strlen(word); i++)
{
insertion(word[i]); }
}
// DELETING elements from top of stack and from front of queue to check PALINDROME
void output()
{
int found;
printf("\nDeleting elements from STACK and QUEUE.");
while( front<=rear && top>-1)
{
if (deletion()== 0)
{
printf("\t--> NOT Matched.....Hence, exiting."); printf("\n%s is not a palindrome.", word); exit(0);
}
else
{ printf("\t--> Matched.....Hence, continue."); }
}
printf("\n%s is a palindrome.", word); }
int main()
{
printf("PROGRAM to check if the given word is PALINDROME or not using STACK and QUEUE."); input();
output();
return 0;
}
