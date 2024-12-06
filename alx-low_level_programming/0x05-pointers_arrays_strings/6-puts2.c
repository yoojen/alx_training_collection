#include "main.h"
#include <stdio.h>

void puts2(char *str)
{
    int i,k;

    while (str[k] != '\0')
    {
    k++;
    }

    for (i = 0; i < k; i +=2)
    {
    putchar(str[i]);
    }
    putchar('\n');
}
