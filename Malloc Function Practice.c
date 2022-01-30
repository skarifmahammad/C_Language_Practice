#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,*arr;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	arr=(int*)malloc(sizeof(int));
	if(arr==NULL)
	{
		printf("No Memory \n");
	}
	else
	{
		printf("Array Element are : ");
		for(i=0;i<n;i++)
		{
			printf(" %d",*(arr+i));
		}
	}
}
