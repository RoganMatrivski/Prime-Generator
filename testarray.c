#include <stdlib.h>
#include <stdio.h>

#include <stdbool.h> // Who the heck not using bool anyway?!

int *primes;

int main(int argc, char **argv)
{
	int SIZE;

	int test1;

	if (argc == 2)
	{	
		SIZE = atoi(argv[1]);
		test1 = argc;

	}
	else if (argc > 2)
	{
		printf("Too much arguments!");
		return 2;
	}
	else if (argc == 1)
	{
		printf("Please specify the prime position");
		return 1;
	}

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
