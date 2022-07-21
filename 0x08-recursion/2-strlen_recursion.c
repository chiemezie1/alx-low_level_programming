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
{	int i = 0;
	while(*s != '\0')
		i++;
	return(i);
}
