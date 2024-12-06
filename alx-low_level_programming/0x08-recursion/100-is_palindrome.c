#include "main.h"
#include <string.h>

/**
* checkPalindrome -> check if it is palindrome
* @str: string
* @start: first index
* @end: last index
* Return: integer
*/

int checkPalindrome(char *str, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (str[start] != str[end])
	{
		return (0);
	}
	return (checkPalindrome(str, start + 1, end - 1));

	return (1);
}

/**
* is_palindrome -> return 1 or 0
* @str: string
* Return: 1 or 0
*/

int is_palindrome(char *str)
{
	if (strlen(str) == 0)
		return (1);
	return (checkPalindrome(str, 0, strlen(str) - 1));
}
