#include<stdio.h>
#include<conio.h>
int main()
{
	int x,i;
	printf(" Enter the Array size : ");
	scanf("%d",&x);
	int arr[x];
	printf(" Enter Array Elements : \n");
	for(i=0;i<x;i++)
    {
        printf(" arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n The Reverse Array is : ");
    for(i=x-1;i>=0;i--)
    {
    	
        printf(" %d",arr[i]);
    }
}
