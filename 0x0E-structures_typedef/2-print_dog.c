#include <stdio.h>
#include<stdlib.h>
#include "dog.h"

/**
 *print_dog - print the struct dog
 *
 * @dog: attributes of the dog
 * @d: pointer 
 * 
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
    struct dog dog;

    dog.name = "Poppy";
    dog.age = 3.5;
    dog.owner = "Bob";

    print_dog(&dog);
    return (0);
}