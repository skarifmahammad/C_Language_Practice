#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,j,k,l,m,n,x;
	printf("Enter a Number : ");
	scanf("%d",&x);
	for(a=1;a<=5;a++)
	{
	    for(i=1;i<=x;i++)
    	{
		    for(j=i;j<x;j++)
		    {
		    printf(" ");
	        }
	        for(k=1;k<=i;k++)
	        {
		    printf(" *");
	        }
		    printf("\n");
	    }
	    for(l=1;l<=x;l++)
	        {
		    for(m=1;m<=l;m++)
		    {
		    printf(" ");
    	    }
    	    for(n=l;n<=x-1;n++)
    	    {
    	    printf(" *");	
		    }
    	    printf("\n");
	    }
    }
	return 0;
}
