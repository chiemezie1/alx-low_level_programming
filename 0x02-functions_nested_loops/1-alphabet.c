#include "main.h"
/**
 *main - check the code
 *
 *void funtion
 *
 *Return: Always 0.
 */
void print_alphabet(void);
{	char ch;
	for (ch = "a"; ch <= "z"; ch++)
	{
		putchar ("%c ", ch);
		putchar("\n");
	}
	return (0);
}
