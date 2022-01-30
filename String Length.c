#include <stdio.h>
#include <conio.h>
int main()
{
    char str[100];
	int i=0,length;
    printf("Enter the string to check Length : ");
    //scanf("%s",str);   //scanf(""); don't calculate 'space'.
    gets(str);           //gets(); calculate 'space'.
        while(str[i] != '\0')
        {
         i++;
		}
    length = i;
    printf("\n The length of the string is : %d", length);
    return 0;
}
