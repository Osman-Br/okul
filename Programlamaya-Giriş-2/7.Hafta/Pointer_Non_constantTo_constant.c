#include<stdio.h>
#include<ctype.h>

void printCharacters(const char *sPtr);

int main(void)
{
	char string[] = "print characters of a string";
	puts("The string is:");
	printCharacters(string);
	puts("");
	
	return 0;
}

void printCharacters(const char *sPtr)
{
	for(;*sPtr!='\0';++sPtr)
	{
		printf("%c",*sPtr);
	}
}
