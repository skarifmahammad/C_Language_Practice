#include<stdio.h>
#include<conio.h>
int main()
{
	int x,i;
	printf("To check all prime numbers from 1 to 300. \n\n\n");
	for(i=2;i<=300;i++)
	{
		if(i==2 || i==3 || i==5 || i==7)
		{
			printf(" %d",i);
		}
		else if(i%2==0 || i%3==0 || i%5==0 || i%7==0)
		{
		}
		else
		{
			printf(" %d",i);
		}
	}
	return 0;
}
