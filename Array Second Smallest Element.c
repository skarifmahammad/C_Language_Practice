#include<stdio.h>
#include<conio.h>
int main()
{
	int i,x,smallest,second_smallest;+
	printf(" Enter array size :");
	scanf("%d",&x);
	int arr[x];
	printf(" Enter array elements : \n");
	for(i=0;i<x;i++)
	{
		printf(" arr[%d]= ",i);
		scanf(" %d",&arr[i]);
	}
	smallest=arr[0];
	for(i=0;i<x;i++)
	{
		if(arr[i]<smallest)
		{
			smallest=arr[i];
		}
	}
	second_smallest=arr[1];
	for(i=1;i<x;i++)
	{
		if(arr[i]!=smallest)
		{
			if(arr[i]<second_smallest)
			{
			    second_smallest=arr[i];
		    }
		}
	}
	printf(" Your Array is : ");
	for(i=0;i<x;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n smallest element of the array = %d",smallest);
	printf("\n second_smallest element of the array = %d",second_smallest);
	return 0;
}
