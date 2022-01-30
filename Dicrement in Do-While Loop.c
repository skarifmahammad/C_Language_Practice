#include<stdio.h>
#include<conio.h>
int main()
{
	int i,x;  // Dicrement in do while Loop
	printf(" How many number you want see : ");
	scanf("%d",&x);
	i=x;
	do
	{
	printf(" %d",i);
	i--;
	}
	while(i>=1);
	return 0;
}
