#include "main.h"

/**
 *  _islower: check lower case
 *  return: integer
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
