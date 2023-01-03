#include "main.h"

/**
 * _isdigit - checks if a char is a digit
 * @c: int to be checked
 * Return: 1 if c is a digit , 0 if otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)

		return (1);

	else
		return (0);
}
