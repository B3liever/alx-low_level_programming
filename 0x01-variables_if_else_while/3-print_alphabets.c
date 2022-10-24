#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabet both lower and uppercases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch=++;
	}
	while (CH <= 'A')
	{
		putchar(CH);
		CH=++;
	}
	return (0);
}
