#include "main.h"
#include <stdio.h>

/**
 *factorial - get the factorial of a number
 *
 *@n: int to which the factorial is to be gotten
 *
 *Return: int factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
