#include<stdio.h>
struct Emp
{
	int eno;
	char ename[20];
	float esal;
};
main()
{
	int a;
	struct Emp e;
	printf("Size of Emp : %d",sizeof(e));
	printf("\nSize of Emp : %d",sizeof(struct Emp));
	return ;
}
