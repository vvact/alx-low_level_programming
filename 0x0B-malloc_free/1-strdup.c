#include "stdlib.h"
#include <string.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: The string to duplicate.
 *
 * Return: On success, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *new_str;

	unsigned int len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
