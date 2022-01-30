#include<stdio.h>
#include<conio.h>
int main()
{
	int i,arr[6];
	printf("Enter any 6 number : \n");
	for(i=0;i<6;i++)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<6;i++)
	{
	   	if(i%2==0)
	   	{
	   		printf("%d",arr[i]);
		}
	}
    for(i=0;i<6;i++)
    {
    	if(i%2==0)
	   	{
		}
		else
		printf("%d",arr[i]);
	}
	return 0;
}
