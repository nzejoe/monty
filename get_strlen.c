#include "monty.h"
/**
 * get_strlen - get length of a string
 * @str: string
 * Return: number of characters
 */
size_t get_strlen(const char *str)
{
	size_t i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

