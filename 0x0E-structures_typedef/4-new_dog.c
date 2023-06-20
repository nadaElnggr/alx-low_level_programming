#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - returns the strings' size
 * @str:string to be checked
 *
 * Return:len of string
 */
int _strlen(char *str)
{
	int length = 0;


	while (str[length] != '\0')
		length = length + 1;
	return (length);
}

/**
 * _strCopy - copies a string from src to dest
 * @src:source string
 * @target:target string
 * @len:length
 *
 * Return:pointer to new copied string
 */
char *_strCopy(char *src, char *target, int len)
{
	int i = 0;


	for (; i < len; i++)
	{
		target[i] = src[i];
	}
	target[i] = '\0';
	return (target);
}

/**
 * new_dog - creates a new dog struct
 * @name:dog's name
 * @age:dog's age
 * @owner:dog's owner
 *
 * Return:pointer to the new dog's struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	name_len = _strlen(name);
	owner_len = _strlen(owner);


	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);


	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}


	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}


	_strCopy(dog->name, name, name_len);
	_strCopy(dog->owner, owner, owner_len);
	dog->age = age;

	return (dog);
}
