#include<stdio.h>
#include <conio.h>
int main()
{
	int i,j,row1,col1,row2,col2,row_sum,col_sum;
	printf(" Enter the number of rows in the first matrix : ");
	scanf("%d",&row1);
	printf(" Enter the number of columns in the first matrix : ");
	scanf("%d",&col1);
	printf(" Enter the number of rows in the second matrix : ");
	scanf("%d",&row2);
	printf(" Enter the number of columns in the second matrix : ");
	scanf("%d",&col2);
	int mat1[row1][col1],mat2[row2][col2];
	if(row1 != row2 || col1 != col2)
	{
	printf(" Number of rows and columns of both matrices must be equal.");
	return 0;
	}
	row_sum = row1;
    col_sum = col1;
	int mat_sum[row_sum][col_sum];
	printf(" Enter the elements of the first matrix : \n");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("\nYour first Matrix is : ");
	for(i=0;i<row1;i++)
	{
		printf("\n");
		for(j=0;j<col1;j++)
		{
			printf("   %d ",mat1[i][j]);
		}
	}
	printf("\nEnter the elements of the second matrix : \n");
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("\nYour second Matrix is : ");
	for(i=0;i<row2;i++)
	{
		printf("\n");
		for(j=0;j<col2;j++)
		{
			printf("   %d ",mat2[i][j]);
		}
	}
	for(i=0;i<row_sum;i++)
	{
		for(j=0;j<col_sum;j++)
		{
			mat_sum[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	printf("\n\nSum of two Matrix is : ");
	for(i=0;i<row_sum;i++)
	{
		printf("\n");
		for(j=0;j<col_sum;j++)
		{
			printf("   %d ",mat_sum[i][j]);
		}
	}
	return 0;
}
