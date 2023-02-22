#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - Entry point
 * Description:printf funt
 * Return: Always 0 (Success)
 */

int positive_or_negative(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%d is positive\n", n);
if (n < 0)
printf("%d is negative\n", n);
if (n == 0)
printf("%d is zero\n", n);
return (0);
}
