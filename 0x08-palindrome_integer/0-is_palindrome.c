#include "palindrome.h"

/**
 * is_palindrome - checks if a unsigned integer is a palindrome.
 * @n:  is the number to be checked
 *
 * Return: 1 if n is a palindrome, and 0 otherwise
 */

int is_palindrome(unsigned long n)
{

	unsigned long num = n, mod, reverse = 0;

	if (n < 10)
		return (1);

	while (num != 0)
	{
		mod = num % 10;
		reverse = (reverse * 10) + mod;
		num = num / 10;
	}

	return (n == reverse);
}

