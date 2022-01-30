#include<stdio.h>
#include <conio.h>
int main()
{
    int i, n, num, pos;
    printf(" Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf(" Enter Array Elements : \n");
    for(i=0;i<n;i++)
    {
        printf(" arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf(" Enter the number to be inserted : ");
    scanf("%d",&num);
    printf(" Enter the position at which the number has to be added : ");
    scanf("%d",&pos);
    for(i=n-1;i>=pos;i--)
        arr[i+1] = arr[i];
   		arr[pos] = num;
   		n = n+1;
    printf(" The array after insertion of %d is : ", num);
    for(i=0;i<n;i++)
    {
       printf("\n arr[%d] = %d", i, arr[i]);
    }
    return 0;
}
