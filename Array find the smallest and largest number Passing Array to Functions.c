#include <stdio.h>
void read_array(int arr[], int n);
void display_array(int arr[], int n);
int find_small(int arr[], int n);
int find_large(int arr[], int n);
int main()
{
	int n, smallest, largest;
	printf("\n Enter the size of the array : ");
	scanf("%d", &n);
	int num[n];
	read_array(num, n);
	display_array(num, n);
	smallest = find_small(num, n);
	printf("\n The smallest number in the array is = %d", smallest);
	largest = find_large(num, n);
	printf("\n The largest number in the array is = %d", largest);
	return 0;
}
void read_array(int arr[10], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
void display_array(int arr[10], int n)
{
	int i;
	printf(" Your Array is :");
	for(i=0;i<n;i++)
	{
		printf(" %d ", arr[i]);
	}
}
int find_small(int arr[10], int n)
{
 	int i=0, small=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i] < small)
		small = arr[i];
	}
	return small;
}
int find_large(int arr[10], int n)
{
 	int i=0, large=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i] > large)
		large = arr[i];
	}
	return large;
}
