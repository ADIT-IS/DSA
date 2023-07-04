#include<stdio.h>
// To enter elements of 1st array // To enter elements of 2nd array
void twr(int no, char from, char to, char aux)
{
if (no == 1)
{
printf("Move disk from rod %c to rod %c\n", from, to);
return; }
twr(no - 1, from, aux, to);
printf("Move disk %d from rod %c to rod %c\n", no, from, to); twr(no - 1, aux, to, from);
}
int main()
{
int no;
scanf("%d", &no); twr(no, 'A', 'C', 'B'); return 0;
}
