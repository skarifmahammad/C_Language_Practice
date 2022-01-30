#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,j=1;
	printf(" Enter a  number to calculate Factorial : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		j=j*i;
	}
	printf("\n Factorial of %d is %u",a,j);
	return 0;
}
