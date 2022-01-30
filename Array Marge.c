#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,m,i,Elements=0;
	printf("Enter the First Array Size : ");
	scanf("%d",&n1);
	printf("Enter the First Array Elements : \n");
	int arr1[n1];
	for(i=0;i<n1;i++)
	{
		printf("arr1[%d] : ",i);
		scanf("%d",&arr1[i]);
	}
	printf("Enter the Second Array Size : ");
	scanf("%d",&n2);
	printf("Enter the Second Array Elements : \n");
	int arr2[n2];
	for(i=0;i<n2;i++)
	{
		printf("arr2[%d] : ",i);
		scanf("%d",&arr2[i]);
	}
	m=n1+n2;
	int arr3[m];
	for(i=0;i<n1;i++)
	{
		arr3[Elements]=arr1[i];
		Elements++;
	}
	for(i=0;i<n2;i++)
	{
		arr3[Elements]=arr2[i];
		Elements++;
	}
	printf("The Marged Array is : ");
	for(i=0;i<m;i++)
	{
		printf("\narr3[%d] : %d",i,arr3[i]);
	}
	return 0;
}
