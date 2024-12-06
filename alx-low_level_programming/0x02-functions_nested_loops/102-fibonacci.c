#include <stdio.h>
/**
 * main - entry of program
 * return 0 (success)
 */
int main() { /* main function*/
    int initial = 0;
    int n1 = 0, n2 = 1;
    int nx = n1 + n2;
    
    while(initial <= 50)
    {
        if (initial == 50)
        {
            printf("%d \n", nx);
        }
        else
        {
            printf("%d, \n", nx);
        }
        n1 = n2;
        n2 = nx;
        
        nx = n1 + n2;
        initial++;
    }
    return 0;
}
