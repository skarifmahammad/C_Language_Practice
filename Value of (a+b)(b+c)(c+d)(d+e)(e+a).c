#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter any 5 numbers : ");
    printf("\na=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    printf("d=");
    scanf("%d",&d);
    printf("e=");
    scanf("%d",&e);
    printf("You Entered : %d %d %d %d %d",a,b,c,d,e);
    printf("\n(a+b)(b+c)(c+d)(d+e)(e+a) = %d %d %d %d %d",(a+b),(b+c),(c+d),(d+e),(e+a));
	return 0;
}

