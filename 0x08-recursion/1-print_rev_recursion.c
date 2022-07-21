#include "main.h"

/**
 *_print_rev_recursion - fuction that prints in reverse
 *
 *@s: strings that is to be printed in revers
 *
 *
 *Reture: Always 0.
 *
 */
void _print_rev_recursion(char *s);
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
