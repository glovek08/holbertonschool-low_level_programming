#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: returns 0 if succesful.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = abs(n) % 10;
	string msg = "Last digit of %i is", n;
	if (lastDigit > 5)
	{
		msg += " and is greater than 5\n";
	}
	else if (lastDigit == 0)
	{
		msg += " and is 0\n";
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		msg += " and is less than 6 and not 0\n";
	}
	printf(msg);
	return (0);
}
