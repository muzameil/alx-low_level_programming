#include <stdio.h>

/**
* main - print the string in the put function
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle
* Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}

putchar('\n');
return (0);
}
