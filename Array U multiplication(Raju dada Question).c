#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,j;
	printf("Enter array size : ");    //   O/P:-  1st*last, 2nd*(last-1), 3rd*(last-2)
	scanf("%d",&a);
	int arr[a];
	printf("Enter array elements :\n");
	for(i=0;i<a;i++)
	{
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	printf("Your array is = ");
	for(i=0;i<a;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("New array is : ");
	for(j=1;j<=(a/2);j++)
        printf("%d ",arr[j-1]*arr[a-j]);
	return 0;
}
