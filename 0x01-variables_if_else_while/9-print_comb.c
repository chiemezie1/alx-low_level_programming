#include <stdio.h>

/**
  * main - Prints a serie of numbers with commas
  *
  * Return: Always (Success);
  */
int main(void)
{
	int cha;

	for (cha = '0'; cha <= '9'; cha++)
	{
		putchar(cha);

		if (cha != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
