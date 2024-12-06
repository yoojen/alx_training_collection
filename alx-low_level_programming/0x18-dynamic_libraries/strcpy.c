#include "main.h"
char *_strcpy(char *dest, char *src)
{
	  int i = 0;

	    for (; src[i] != '\0'; i++)
		        {
				      dest[i] = src[i];
				          }
	      return (dest);
}

