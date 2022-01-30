#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("Enter a number to check PRIME or NOT PRIME : ");
	scanf("%d",&x);
	if(x==1)
	    printf("\n1 Is a confuse number \n");
	else if(x==2 || x==3 || x==5 || x==7)
	    printf("\n%d Is a prime number \n",x);
	else if(x%2==0 || x%3==0 || x%5==0 || x%7==0)
	    printf("\n%d Is a not prime number \n",x);
	else
	    printf("\n%d Is a prime number \n",x);
	return 0;
}
