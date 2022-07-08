#include "main.h"
/**
 * main - check if a letter is an upper digit
 *
 * return: always 0.
 */
int _isdigit(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
