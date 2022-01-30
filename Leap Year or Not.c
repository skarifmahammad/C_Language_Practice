#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("Enter a Year to check that's Leap Year or Not : ");
	scanf("%d",&x);
	if(x%100==0)
	{
		printf("%d is a Leap Year",x);
	}
	else if(x%4==0)
	{
		printf("%d is a Leap Year",x);
	}
	else
	    printf("%d is Not a Leap Year",x);
	return 0;
}
