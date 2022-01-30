#include<stdio.h>
#include<conio.h>
int main()
{
	int p,i,sumeven=0,sumodd=0;
	printf(" Enter array  size :");
	scanf("%d",&p);
	int arr[p];
	for(i=0;i<p;i++)
	{
		printf(" arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf(" Your Array is =");
	for(i=0;i<p;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
	for(i=0;i<p;i++)
	{
		if(arr[i]%2==0)
	    {
		sumeven=sumeven+arr[i];		                                        
        }
	   	else
   	    {
		sumodd=sumodd+arr[i];                                             
		}
	}
	printf(" sum of even Numbers=%d\n",sumeven);
	printf(" sum of odd Numbers=%d\n",sumodd);
	int x;
	if(sumeven>sumodd)
	{
		x=sumeven-sumodd;
	}
	else
	{
		x=sumodd-sumeven;
	}
	printf(" Difference = %d\n",x);
	return 0;
}
