#include<stdio.h>
#include<conio.h>
int main()
{
	int x,i,sum=0;
	float avg;
	printf(" Enter the array size : ");
	scanf("%d",&x);
	int a[x];
	for(i=1;i<=x;i++)
	{
	    scanf("%d",&a[i]);
    }
	for(i=1;i<=x;i++)
	{
	    sum=sum+a[i];
    }
	printf("Sum is %d",sum);
	avg=sum/x;
	printf("\nAverage is %f",avg);
	return 0;
}
