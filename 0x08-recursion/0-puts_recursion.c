#include "main.h"

/**
 *_puts_recursion - to print srings
 *
 *@s: strings of charater
 *
 *
 *Return: always 0.
 */
void _puts_recursion(char *s)
{	int i = 0;
	int j = 0;
	while (s < '\0')
		i++;
	for (j = 0; j <= i; j++)
	{
		puts(s);
	}
}
