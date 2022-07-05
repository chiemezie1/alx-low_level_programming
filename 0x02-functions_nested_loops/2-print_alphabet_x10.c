
#include <stdio.h>
/**
 *main - print out putchar
 *
 *Return: Always 0.
 */
void print_alphabet_x10(void);
{	int x = 0;
	char ch;
	while (x < 9)
	{	
		for (ch = "a"; ch <= "z"; ch++)
		{
			_putchar ("%c ", ch);
			_putchar("\n");
		}
		x++;
	}
	return (0);
}
