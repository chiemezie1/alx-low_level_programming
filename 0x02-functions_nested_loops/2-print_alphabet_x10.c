
#include <stdio.h>
/**
 *main - print out putchar
 *
 *Return: Always 0.
 */
void print_alphabet_x10(void);
{
	char ch;
	int x = 0;

	while (x <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');

		i++;
	}
}
