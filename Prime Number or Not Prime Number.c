#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("Enter a number to check Prime or Not Prime : ");
	scanf("%d",&x);
	if(x==2 || x==3 || x==5 || x==7)
	printf("It's a prime number");
	else if(x%2==0 || x%3==0 || x%5==0 || x%7==0)
	printf("It's a not prime number");
	else
	printf("It's a prime number");
	return 0;
}
