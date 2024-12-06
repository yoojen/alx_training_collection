#include <stdio.h>
#include "main.h"

void rev_string(char *s)
{
  int length = 0, index = 0;
  char t;
  
  while (s[index++])
  {
    length++;
  }
    for (index = length -1; index >= length / 2; index--)
    {
      t = s[index];
      s[index] = s[length - index -1];
      s[length - index - 1] = t;
    }
}
