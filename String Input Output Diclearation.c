#include <stdio.h>
#include <conio.h>
int main()
{
    char str[20];
    printf("Enter Your Name : ");
    gets(str);
    //scanf("%s",str);   //scanf(""); don't calculate 'space'.
    
    
    puts(str);      //put(); Automatically jump to next line.
    //printf("%s",str);
    return 0;
}
