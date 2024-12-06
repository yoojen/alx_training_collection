#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr -> concanated string
 * @ac: first param
 * @av: all param
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char **newString;
	int len = 0, i;
	
	if (ac <= 0 || ac == NULL)
		return (null);
	
	newString = av;

	len = strlen(newString) +1;

	for (i = 0; i < ac; i++)
	{
		char *temp;
		len += strlen(av) + 1;
		temp = malloc(len * sizeof(*char));

		if (!temp)
		{
			return (NULL);
			free(temp);
		}
		newString = temp;

		strcat(newString, av[i]);

	}

	return (newString);
}
