#include<stdio.h>
struct Global
{
	int X;
};
main()
{
	struct Global M;
	printf("Size of Global : %d",sizeof(M));
	printf("\nSize of Global : %d",sizeof(struct Global));
	return ;
}
check()
{
	struct Global M;
}
