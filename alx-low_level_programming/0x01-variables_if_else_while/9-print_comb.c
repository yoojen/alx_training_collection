#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * return: 0 success
 */
int main(void) /* main function*/
{
    int i;
    for (i = '0'; i<= '9'; i++)
    {
     putchar(i);
     if(i !=9)
     {
         putchar(',');
         putchar(' ');
     }
    }
return (0);
}
