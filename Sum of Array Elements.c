#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,sum=0;
	printf("Enter array size=");
	scanf("%d",&a);
   	int arr[a];
	for(i=0;i<a;i++)
	    {
		    printf("arr[%d] = ",i);
		    scanf("%d",&arr[i]);
	    }
    printf("sum of array elements is=");
	for(i=0;i<a;i++)
        {
        	sum=sum+arr[i];
	    }
	    printf("%d",sum);
	return 0;
}
