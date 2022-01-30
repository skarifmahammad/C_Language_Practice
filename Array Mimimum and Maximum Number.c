#include<stdio.h>
#include<conio.h>
int main()
{
  int i,x,n,val,min,max=0;
  printf("Enter Array size :");
  scanf("%d",&n);
  printf("Enter the Array Elements :\n");
  scanf("%d",&val);
  min=val;                                        
  if(val>=max)
  	max=val;
  	for(i=1;i<n;i++)
  	{
  		scanf("%d",&val);
  		if(val>max)
  		 	max=val;
  		if(val=min)
  	 		min=val;
  	}
  printf("\nThe maximum of given %d numbers is: %d",n,max);
  printf("\n");
  printf("\nThe minimum of given %d numbers is: %d",n,min);
  return 0;
}
