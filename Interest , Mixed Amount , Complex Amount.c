#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float p,r,t;
	float i,m,c,n;
	printf("Enter Principal value : ");
	scanf("%f",&p);
	printf("Enter Interest ray : ");
	scanf("%f",&r);
	printf("Enter the time in Year : ");
	scanf("%f",&t);
	printf("Enter the terms : ");
	scanf("%f",&n);
	printf("\nInterest = %f",i=p*r*t/100);
	printf("\nMixed Amount = %f",m=p+i);
	printf("\nComplex Amount = %f",c=pow(m,n));
	return 0;
}
