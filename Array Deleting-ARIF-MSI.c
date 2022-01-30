#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,pos;
    printf(" Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf(" Enter the Array Elements : \n");
    for(i=0;i<n;i++)
    {
        printf(" arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf(" Enter the position from which the number has to be deleted : ");
    scanf("%d",&pos);
    if(n-1>=pos)
    {
        for(i=pos;i<n-1;i++)
        {
            arr[i]=arr[i+1];
            n--;
        }
        printf("\n The array after deletion is : ");
        for(i=0;i<n;i++)
            printf("\n arr[%d] = %d",i,arr[i]);
    }
    else
    {
    	printf("\n %d possition is not present in this Array so deletion is not possible.",pos);
	}
    return 0;
}
