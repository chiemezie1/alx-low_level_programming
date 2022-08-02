#include <stidio.h>
/**
 *main - check code for putout
 *
 *void funtion
 *
 *Return: Always 0.
 */
int print_last_digit(int);
{	int n, abs_n, lst;
	if (n > 0)
	}
		lst = n / 10;
		_putchar("%d", lst);
	}
	else if (n < 0)
	{
		abs_n = n * -1;
		lst = abs_n / 10
		_putchar("%d", lst);
	}
	else
		_putchar("0");
return (0);
}
