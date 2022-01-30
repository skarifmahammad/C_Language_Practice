#include<stdio.h>
#include<conio.h>
int main()
{
    int A,B,C,D,E,X,Y,Z,M,N;
    printf("Enter the value of A,B,C,D & E : ");
    printf("\nA=");
    scanf("%d",&A);
    printf("B=");
    scanf("%d",&B);
    printf("C=");
    scanf("%d",&C);
    printf("D=");
    scanf("%d",&D);
    printf("E=");
    scanf("%d",&E);
    printf("\nX=%d",X=A+B/C*D+E);
    printf("\nY=%d",Y=C%D+A-B*E);
    printf("\nZ=%d",Z=E+A*C-B%D);
    printf("\nX+Y+Z=%d",X+Y+Z);
    printf("\nX*Y*Z=%d",X*Y*Z);
	return 0;
}

