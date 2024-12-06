#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - entry point of program
 * Return: 0 (success)
 * betty style doc for function main goes there
 */
int main() {
    int n;
    srand(time(0));
    n=rand() - RAND_MAX /2;
	if(n > 0)
	{
		if(n != 98){
			n =98;

			printf("%d is positive\n", n);
		}
	}
	else if(n == 0)
	{
		if(n !=0){
			n=0;
			
			printf("%d is zero\n", n);
		}
	}
	else{
		n = -98;
		printf("%d is negative\n", n);
	}
    return 0;
}
