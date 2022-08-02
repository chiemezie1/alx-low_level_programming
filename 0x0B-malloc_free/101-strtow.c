#include "main.h"
#include <stdlib.h>

/**
  * strtow - splits a string into two
  * @char: char to be slipted 
  * @*str: pointer
  *
  * Return: pointer to array 
  */
char **strtwo(char, *str)
{
	int i = 0, j = 0, l = 0;
	char **s;

	
	if (char == 0)
		return (NULL);
		
	while (str[i])
	{
		i++;
	}
	s = malloc(i * sizeof(*));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
