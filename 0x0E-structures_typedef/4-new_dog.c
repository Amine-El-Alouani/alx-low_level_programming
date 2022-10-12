#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - struct func
 * @name: input
 * @age: input
 * @owner: input
 * Return: value
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	i = _strlen(name);
	new_dog->name = malloc(sizeof(char) * i + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	j = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * j + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}

/**
 * _strlen - input
 * @s: input
 * Return: value
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * _strcpy - char func
 * @dest: input
 * @src: input
 * Return: value
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
