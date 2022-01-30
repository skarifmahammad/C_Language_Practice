#include<stdio.h>
#include<conio.h>
int main()
{
	int x,largest,smallest,i,j;
	printf(" Enter the array size : ");
	scanf("%d",&x);
	int arr[x];
	printf(" Enter array elements : \n");
	for(i=0;i<x;i++)
	{
		printf(" arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	printf(" Your array is : ");
	for(i=0;i<x;i++)
	{
		printf("%d ",arr[i]);
	}
	largest=arr[0];
	for(i=0;i<x;i++)
	{
	    if(arr[i]>largest)
	        {
	        	largest=arr[i];
			}
	}
	printf("\n\n The largest element is %d",largest);
	smallest=arr[0];
	for(i=0;i<x;i++)
	{
	    if(arr[i]<smallest)
	        {
	        	smallest=arr[i];
			}
	}
    printf("\n The smallest element is %d",smallest);
	return 0;
}
