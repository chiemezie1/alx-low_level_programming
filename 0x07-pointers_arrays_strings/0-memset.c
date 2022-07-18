#include "main.h"

/**
 * _memse -> fills a memory with a constant
 *
 *@s: memory to be replaced or filed
 *@b: constant which is to be used
 *@n: the integer bytes
 *
 *Return: the filled memory
 */
char *_memset(char *s, char b, unsigned int n);
{	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
