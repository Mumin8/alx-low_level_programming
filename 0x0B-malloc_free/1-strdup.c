#include <string.h>
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: the pointer to parameter
 * Return: NULL if str is NULL and pointer to duplicated string if otherwise
 */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	str2 = malloc(sizeof(char) * (strlen(str) + 1));
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}
