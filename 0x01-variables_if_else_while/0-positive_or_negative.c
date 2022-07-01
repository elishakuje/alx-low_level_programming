#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Assigning a random number
 * variable n each time it is executed
 * it will print whether the number
 * stored in variable n is positive or
 * negative or zero
  * Return: 0
 */
int main(void)
{
	int n;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
        return (0);
