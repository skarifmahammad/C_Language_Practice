#include<stdio.h>
#include<conio.h>
int main()
{
	int i,x;
	printf("Enter array size :");
	scanf("%d",&x);
	int arr[x];
	for(i=0;i<x;i++)
	{
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	int large=arr[0];
	for(i=0;i<x;i++)
	{
		if(arr[i]>large)
		{
			large=arr[i];
		}
	}
	printf("largest element of the array = %d",large);
	return 0;
}
