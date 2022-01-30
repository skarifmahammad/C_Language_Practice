#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d;
	printf("Capital Letter : ");
	printf("\n");
	for(a='A';a<='Z';a++)
	{
	printf("                ASCII value of %c -(%d) ",a,a);
	printf("\n");
    }
    printf("Small Letter : ");
    printf("\n");
    for(b='a';b<='z';b++)
	{
	printf("              ASCII value of %c -(%d) ",b,b);
	printf("\n");
    }
    printf("Numbers : ");
    printf("\n");
    for(c='0';c<='9';c++)
	{
	printf("         ASCII value of %c -(%d)",c,c);
	printf("\n");
    }
    printf("Characters : ");
    printf("\n");
    for(d='!';d<='/';d++)
	{
	printf("            ASCII value of %c -(%d)",d,d);
	printf("\n");
    }
    	for(d=':';d<='?';d++)
    {
    printf("            ASCII value of %c -(%d)",d,d);	
    printf("\n");
	}
		for(d='[';d<='_';d++)
    {
    printf("            ASCII value of %c -(%d)",d,d);
	printf("\n");	
	}
		for(d='{';d<='}';d++)
    {
    printf("            ASCII value of %c -(%d)",d,d);	
    printf("\n");
	}
	return 0;
}
