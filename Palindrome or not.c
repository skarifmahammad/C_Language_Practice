#include<stdio.h>
#include<conio.h>
int main()
{
	char str[100];
	int i,len,flag=0;
	printf("Enter any string to check Palindrome or not : ");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			flag=1;
			break ;
		}
	}
	if(flag==0)
	{
		printf("\n%s is a Palindrome String.",str);
	}
	else
	{
		printf("\n%s is not a Palindrome String.",str);
	}
	return 0;
}
