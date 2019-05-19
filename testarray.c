#include <stdlib.h>
#include <stdio.h>

#include <stdbool.h> // Who the heck not using bool anyway?!

#define SIZE 1000000

int *primes;

int main()
{
	primes = malloc(SIZE * sizeof(int));

	if (primes == NULL)
	{
		printf("Can't allocate memory.");
		exit(0);
	}

	int primes_counter= 1;
	primes[0] = 2;

	for (int number = 3; primes_counter < SIZE + 1; number++) // Essentially the same as while(primes_counter < SIZE) but including incremental number.
	{
		bool isPrime = true;

		for (int j = 0; j < primes_counter; j++)
		{
			/*if (primes[j] == 0)*/
				/*return 1337;*/

			if (number % primes[j] ==0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			primes[primes_counter] = number;
			primes_counter++;
			
			printf("%d => %d\n", primes_counter - 1, number);
			// add print function here.
		}
	}
}
