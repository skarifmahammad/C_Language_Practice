#include<stdio.h>
#include<conio.h>
int evenodd(int);  //FUNCTION DECLIEARATION
int main()
{
	int n,flag;
	printf(" Enter the number : ");
	scanf("%d",&n);
	flag=evenodd(n);  //FUNCTION CALL
	if (flag == 1)
		printf("\n %d is EVEN",n);
	else
		printf("\n %d is ODD",n);
	return 0;
}
int evenodd(int a) // FUNCTION HEADER
{
	// FUNCTION BODY
	if(a%2 == 0)
		return 1;
	else
		return 0;
}
