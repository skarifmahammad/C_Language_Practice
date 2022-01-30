#include <stdio.h>
#include<conio.h>
int main()
{
    int i,j,a,n;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Array Elements : \n");
    for(i=0;i<n;i++)
    {
    	printf("arr[%d] = ",i);
    	scanf("%d",&arr[i]);
	}
    for(i=0;i<n;i++) 
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j]) 
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
 	return 0;
}

