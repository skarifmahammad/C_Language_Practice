#include<stdio.h>
#include<conio.h>
int main()
{
   int x,y,z,i,j;
   printf("Enter a number for view star pattern(PYRAMID-2D) : ");
   scanf("%d",&x);
   for(i=1;i<=x;i++)
   {
      for(y=i;y<x;y++)
      {
      printf(" ");
      }
        for(z=1;z<=i;z++)
        {
    	printf(" *");
     	}
    printf("\n");
   }
   return 0;
}
