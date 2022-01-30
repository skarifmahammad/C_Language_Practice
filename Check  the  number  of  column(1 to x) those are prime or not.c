#include<stdio.h>
#include<conio.h>
int main()
{
	int i,x;
	printf("1 to how many numbre you want to check those are PRIME or NOT PRIME : ");
	scanf("%d",&x);
	printf("1 is not a prime number & not prime number. \n");
	for(i=2;i<=x;i++)
	{

	if(i==2 || i==3 || i==5 || i==7)
	printf("%d Is a prime number \n",i);
	else if(i%2==0 || i%3==0 || i%5==0 || i%7==0)
	printf("%d Is a not prime number \n",i);
	else
	printf("%d Is a prime number \n",i);
	}
	return 0;
}
