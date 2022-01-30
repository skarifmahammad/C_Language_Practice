#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,x,k;
	printf("Enter a Number to see star pattern : ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=i;j<x;j++)
		{
		printf("  ");
	    }
	    for(k=1;k<=i;k++)
	    {
		    printf(" *");
		//	printf(" %d",i);
		//	printf(" %d",k);
	    }
		printf("\n");
	}
	return 0;
}
