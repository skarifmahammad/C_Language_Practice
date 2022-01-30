#include<stdio.h>
#include<conio.h>
int main()
{
	int x,i;
	printf(" Enter the Array size : ");
	scanf("%d",&x);
	int arr[x];
	printf(" Enter Array Elements : ");
	for(i=0;i<x;i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n The Traverse Array is : ");
    for(i=0;i<x;i++)
    {
        printf("\n arr[%d] = %d", i, arr[i]);
    }
}
