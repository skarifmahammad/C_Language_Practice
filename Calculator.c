#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,ch;
	printf("Enter any two number\n");
	scanf("%d%d",&x,&y);
	printf("\n1: Addition\n2: Substriction\n3: Multiplication\n4: Division\n5: Remainder\n\n\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("%d+%d=%d",x,y,x+y);
			break;
		case 2:
			printf("%d-%d=%d",x,y,x-y);
			break;
		case 3:
			printf("%d*%d=%d",x,y,x*y);
			break;
		case 4:
			printf("%d/%d=%d",x,y,x/y);
			break;
		case 5:
			printf("ANS=%d",x%y);
			break;
	}
	return 0;
}
