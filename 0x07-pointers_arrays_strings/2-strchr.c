#include "main.h"

/**
 *_strchr - locate a charater in a string
 *
 *@s: strings to loop through
 *@c: charater which is to be located
 *
 *Reture: a string pointer to first occurrance of the charater
 */
char *_strchr(char *s, char c);
{
	int i = 0;
	int j;
	while (s[i])
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s = s + j;
			return (s);
		}
	}
	return ('\0');
}
