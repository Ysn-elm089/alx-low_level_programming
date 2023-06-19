#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* This program will assign a random number to the variable n each time it is executed.
   Complete the source code in order to print the last digit of the number stored in the variable n. */

/* The last digit */
int main(void)
	{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	/* Extracting the last digit */
	int lastDigit = abs(n) % 10;
	
	if (lastDigit > 5)
		{
			printf("%d and is greater than 5\n", lastDigit);
		}
	else if (lastDigit == 0)
		{
			printf("%d and is 0\n", lastDigit);
		}
	else
		{
			printf("%d and is less than 6 and not 0\n", lastDigit);
		}
	return 0;
}
