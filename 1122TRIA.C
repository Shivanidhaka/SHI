#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("enter any number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
printf("%d ",i);
}

printf("\n");
}
getch();
}