#include<stdio.h>
#include<conio.h>
int main()
{
	int i,x,largest,second_largest;
	printf(" Enter array size :");
	scanf("%d",&x);
	int arr[x];
	printf(" Enter array elements : \n");
	for(i=0;i<x;i++)
	{
		printf(" arr[%d]= ",i);
		scanf(" %d",&arr[i]);
	}
	largest=arr[0];
	for(i=0;i<x;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	second_largest=arr[1];
	for(i=1;i<x;i++)
	{
		if(arr[i]!=largest)
		{
			if(arr[i]>second_largest)
			{
			    second_largest=arr[i];
		    }
		}
	}
	printf(" Your Array is : ");
	for(i=0;i<x;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n largest element of the array = %d",largest);
	printf("\n second_largest element of the array = %d",second_largest);
	return 0;
}
