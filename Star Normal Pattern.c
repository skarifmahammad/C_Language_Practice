#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,x;
	printf("Enter a Number to see Normal Star Pattern : ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=x;j++)
		{
			printf(" *");
		}
			printf("\n");
	}
	return 0;
}
