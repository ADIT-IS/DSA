// JOSEPHUS PROBLEM
#include<stdio.h>
int josephus(int n, int m)
{
int i, temp=0;
for(i=1; i<= n;++i)
{ temp= (temp+ m) %i; } return temp+ 1;
}
int main()
{
int n,m;
printf("Particpants ? "); scanf("%d", &n);
printf("No of passes: "); scanf("%d", &m);
printf("Won player: %d", josephus(n, m+1));
return 0; }
