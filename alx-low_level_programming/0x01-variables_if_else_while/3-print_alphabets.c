#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - entry 
* return : 0 success
*/

int main(void) /* main function*/
{
char a;

for (a = 'a'; a <= 'z'; a++)
putchar(a);
for (a = 'A'; a <= 'Z'; a++)
putchar(a);
putchar('\n');
return (0);
}
