#include <stdio.h>
#include <conio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter two number : \n");
    printf("Before swap");
    printf("\na=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    swap(&a,&b);
    printf("After swap \n");
    printf("a=%d \nb=%d",a,b);
}
void swap(int*x,int*y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
