#include "main.h"

/**
 *_memcpy - copies a memory area
 *
 *@dest: memory area to be copied to
 *@src: memory area to be copied from
 *@n: integer number of bytes to be copied
 *
 *Reture: memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
