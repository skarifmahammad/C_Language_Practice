#include<stdio.h>
#include<conio.h>
int main()
{
	isEven();
	add();
	isEven();
	add();
	add();
}
add()
{
	int a,b,c;
	printf("\nADD");
	printf("\nEnter two numbers for addition : \n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d+%d=%d\n",a,b,c);
}
isEven()
{
	int a;
	printf("\nODD-EVEN");
	printf("\nEnter a number to check Odd or Even : ");
	scanf("%d",&a);
	if(a%2==0)
	    printf("%d is EVEN\n",a);
	else
	    printf("%d is ODD\n",a);
}
