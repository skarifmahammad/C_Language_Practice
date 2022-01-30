#include<stdio.h>
#include <conio.h>
int main()
{
	int i,j,row,col;
	printf(" Enter Row : ");
	scanf("%d",&row);
	printf(" Enter Column : ");
	scanf("%d",&col);
	int mat[row][col];
	printf(" Enter the matrix elements : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf(" Your Matrix is : ");
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<col;j++)
		{
			printf(" %d ",mat[i][j]);
		}
	}
	return 0;
}
