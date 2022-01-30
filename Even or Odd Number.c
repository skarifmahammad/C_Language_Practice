#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("Enter a number to check Even or Odd : ");
	scanf("%d",&x);
	if(x%2==0)
	    printf("\n%d Is a Even number \n",x);
	else
	    printf("\n%d Is a Odd number \n",x);
	return 0;
}
