#include <stdio.h>
/**
 * main - entry of program
 * return: (0) 
 */
 
int main(void) /* main function of program*/
{
 int i;
 int sum = 0;
 
 for (i = 0; i <= 1024; i++)
 {
  if ((i % 5 == 0) || (i % 3 == 0))
  {
   sum = sum + i;
  }
 }
 printf("%d\n", sum);
 return (0);
}
