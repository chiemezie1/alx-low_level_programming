#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - retun the length of string
 *
 *@s: string the length is to be returned
 *
 *
 *Return: length of s
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
