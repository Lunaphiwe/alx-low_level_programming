#include "main.h"

/**
 * _isdigit - check if character is a digit
 * @c: character
 * Return: 1 if its a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
