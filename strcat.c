//concatinates second string with first string
#include <stdio.h>
#include <string.h>
int main()
{
	char string1[100];
	char string2[100];
	
	gets(string1);
	gets(string2);
	
	strcat(string1,string2);
	puts(string1);
	return 0;
	
}
