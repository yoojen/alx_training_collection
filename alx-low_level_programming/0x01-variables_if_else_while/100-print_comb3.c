#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * return: 0 success
 */
int main(void) /* main function*/
{

int d,p;
for(d = '0'; d< '9'; d++)
{
    for (p = d + 1; p <= '9'; p++)
    {
            if (p != d)
            {
                putchar(d);
                putchar(p);
                if(d == '7' && p == '8')
                continue;
                putchar(',');
                putchar(' ');
            }
        
    }
}
return (0);
}
