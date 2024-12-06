#include "main.h"

/* _isdigit(int c) function : return 0 or 1 according to input*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
return (0);
}
