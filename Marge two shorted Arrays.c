#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n1, n2, m, index=0;
    int index_first = 0, index_second = 0;
    printf(" Enter the size of first array : ");
    scanf("%d", &n1);
    int arr1[n1];
    printf(" Enter the elements of the first array : \n");
    for(i=0;i<n1;i++)
    {
        printf(" arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\n Enter the size of second array : ");
    scanf("%d", &n2);
    int arr2[n2];
    printf(" Enter the elements of the second array : \n");
    for(i=0;i<n2;i++)
    {
        printf(" arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }
    m = n1+n2;
    int arr3[m];
    while(index_first < n1 && index_second < n2)
    {
	    if(arr1[index_first]<arr2[index_second])
        {
            arr3[index] = arr1[index_first];
            index_first++;
        }
        else
        {
            arr3[index] = arr2[index_second];
    index_second++;
    }
    index++;
    }
// if elements of the first array are over and the second array has some elements
    if(index_first == n1)
    {
        while(index_second<n2)
        {
            arr3[index] = arr2[index_second];
            index_second++;
            index++;
        }
    }
// if elements of the second array are over and the first array has some elements
    else if(index_second == n2)
    {
        while(index_first<n1)
        {
            arr3[index] = arr1[index_first];
            index_first++;
            index++;
        }
    }
    printf("\n\n The merged array is");
    for(i=0;i<m;i++)
    printf("\n arr[%d] = %d", i, arr3[i]);
    return 0;
}
