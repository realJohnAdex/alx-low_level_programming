#include <stdio.h>
#include <stdbool.h>

/**
 * isPrime- check if a number is prime
 * @x: integer input
 *
 * Description: cheeks if a number is prime
 *
 * Return: Always Bool(success)
 */

bool isPrime(int x)
{
	int i;

	/* corner case: 0 and 1 aren't prime numbers */
	if (x == 0 || x == 1)
		return (0);
	for (i = 2; i <= x / 2; i++)
	{
		if (x > 2 && x % i == 0)
			return (0);
	}
	return (1);
}

/**
 * main- Entry point
 *
 * Description: finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	long int num, prime_factor, largest_prime_factor;

	num = 612852475143;
	prime_factor = 0;
	largest_prime_factor = 0;
	for (i = 3; i <= num / 2; i += 2)
	{
		if (num % i == 0 && isPrime(i))
			prime_factor = i;
	}
	largest_prime_factor = prime_factor;
	printf("%ld\n", largest_prime_factor);
	return (0);
}
