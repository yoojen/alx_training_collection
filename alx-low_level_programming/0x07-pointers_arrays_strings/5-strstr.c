#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr -> return exact needle if is in haystack
 * @haystack: string to find from
 * @needle: character to be located
 * Return: character
 */

char *_strstr(char *haystack, char *needle)
{
	char *rs;

	rs = strstr(haystack, needle);
	return (rs);
}
