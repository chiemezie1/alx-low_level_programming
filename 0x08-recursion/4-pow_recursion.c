#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion - get the factorial of a number
 *
 *@x: int to which is toraised to power
 *@y: int power
 *
 *Return: int of x raised to power y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 1)
		return (1);

	return (x * _pow_recursion((x, y - 1));
}
