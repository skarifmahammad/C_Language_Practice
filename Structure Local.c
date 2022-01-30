#include<stdio.h>
main()
{
	struct Local
	{
		int X;
	};
	struct Local l; // It is allowed;
	printf("Size of Local : %d",sizeof(l));
}
/*check() // It is not allowed;
{
	struct Local l;
}*/
