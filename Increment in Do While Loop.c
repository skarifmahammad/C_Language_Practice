#include<stdio.h>
#include<conio.h>
int main()
{
	int i,x;  //Increment in do while Loop
	printf("How many number you want see : ");
	scanf("%d",&x);
	i=1;
	do
	{
	printf(" %d",i);
	i++;
	}
	while(i<=x);
	return 0;
}
