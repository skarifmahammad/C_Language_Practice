#include<stdio.h>
#include<conio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,col;
    printf("Enter three Point position : ");
    printf("\nx1=");
    scanf("%d",&x1);
    printf("y1=");
    scanf("%d",&y1);
    printf("\nx2=");
    scanf("%d",&x2);
    printf("y2=");
    scanf("%d",&y2);
    printf("\nx3=");
    scanf("%d",&x3);
    printf("y3=");
    scanf("%d",&y3);
    col=x1*(y2-y3)+x2*(y1-y3)+x3*(y1-y2); //some thing went wrong in this Formala;
    if(col=0)
    {
    	printf("This Graph is Straight Line");
	}
	else
	{
		printf("This Graph is not a Straight Line");
	}
	return 0;
}

