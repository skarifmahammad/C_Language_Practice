#include<stdio.h>
#include<conio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],i,j;
    printf(" Enter 9 number for a matrix :");
    for (i=0;i<=2;i++)
	{
 	    for (j=0;j<=2;j++)
		{
       	    scanf(" %d\t",&A[i][j]);
	    }
    }
    printf(" Enter 9 number for a matrix\n");
    for (i=0;i<=2;i++)
	{
    	for (j=0;j<=2;j++)
		{
    	    scanf(" %d\t",&B[i][j]);
	    }
    }
    printf(" The Matrix Addition : \n");
    for (i=0;i<=2;i++)
	{
     	for (j=0;j<=2;j++)
		{
           C[i][j]=A[i][j]+B[i][j];
 	       printf(" %d\t",C[i][j]);
	    }
 	    printf("\n\n");
    }
    return 0;
}
