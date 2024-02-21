# Prime Generator Example Code.

  Below explanation is from Gemini 1.0 Pro

This C program finds and prints prime numbers up to a specified position. Here's a breakdown of how it works:

#### Header Includes: The program includes necessary headers:

- <stdlib.h>: For atoi and malloc.
- <stdio.h>: For input/output functions.
- <stdbool.h>: For the bool data type.


#### Global Variables:

- primes: An integer array to store prime numbers.


#### `main` Function:

- Parses command-line arguments:
  - If exactly one argument is provided, it's treated as the desired prime position (SIZE).
  - If more than one argument is given, it prints an error message and returns with an error code.
  - If no argument is given, it prints an error message and returns with an error code.
- Allocates memory for primes using malloc.
- Initializes the first prime number (2) in primes.

#### Sieve of Eratosthenes Algorithm:

- It starts with number = 3 and iterates until it finds enough prime numbers to fill the primes array.
- For each number, it checks if it's prime:
  - If it's divisible by any prime number found so far (stored in the primes array), it's not prime.
  - If it passes this test, it's considered prime and added to the primes array.
- It prints the position and the prime number as it finds them.

#### Error Handling:

- If memory allocation for primes fails, it prints an error message and exits the program.
- If the user provides invalid command-line arguments, it prints an error message and returns with an error code.
