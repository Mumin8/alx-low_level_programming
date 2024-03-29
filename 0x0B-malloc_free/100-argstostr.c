#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - It concatenate all the arguments
 * @ac: the number of argument passed in
 * @av: the argument vector
 * Return: pinter to the new string or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, stlen = ac;
	char *concat;

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			stlen++;
		}
	}
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	concat = malloc(sizeof(char) * stlen + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concat[k] = av[i][j];
			k++;
		}
		concat[k++] = '\n';
	}
	return (concat);
}
