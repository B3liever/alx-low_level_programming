#include <stdio.h>

/**
 * main -prints alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{
	int letter = 97;

	do {
		putchar(letter);
		letter++;

	} while (letter <= 122);

	putchar(10);

	return (0);

}
