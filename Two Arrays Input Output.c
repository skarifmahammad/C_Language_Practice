#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,i,j;
	printf("Enter 2 array sizes : \n");
	scanf("%d%d",&x,&y);
	int arr1[x],arr2[y];
	for(i=0;i<x;i++)
	{
		printf("arr1[%d]= ",i);
		scanf("%d",&arr1[i]);
	}
	printf("\n");
		for(j=0;j<y;j++)
	{
		printf("arr2[%d]= ",j);
		scanf("%d",&arr2[j]);
	}
	printf("Your 1st array is : ");
	for(i=0;i<x;i++)
	{
		printf(" %d",arr1[i]);
	}
	printf("\n");
	printf("Your 2nd array is : ");
		for(j=0;j<y;j++)
	{
		printf(" %d",arr2[j]);
	}
	return 0;
}
