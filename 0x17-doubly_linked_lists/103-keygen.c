#include <stab.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * keygen - Generates a random valid key
 * @key: The key to be generated
 * @size: The size of the key
 *
 * Return: 1 on success, 0 on failure
 */
int keygen(char *key, int size)
{
    int i;