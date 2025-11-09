#include "main.h"

/**
 * _is_prime_helper - Recursively checks if n is divisible by any number
 * @n: The number to check
 * @divisor: The current divisor to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _is_prime_helper(int n, int divisor)
{
if (divisor * divisor > n)
return (1);           /* n has no divisors → prime */
if (n % divisor == 0)
return (0);           /* divisible → not prime */
return (_is_prime_helper(n, divisor + 1));
}

/**
* is_prime_number - Returns 1 if the input integer is a prime number,
* otherwise returns 0
* @n: The number to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (_is_prime_helper(n, 2));
}
