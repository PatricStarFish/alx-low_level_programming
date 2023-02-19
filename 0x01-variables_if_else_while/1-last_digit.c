#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description:printf funt
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int b = n / 10;
int m = n - (b * 10);
printf("Last digit of %d is %d ", n, m);
if (m == 0)
printf("and is 0 /n");
if (m < 6)
printf("and is less than 6 and not 0 /n");
if (m > 5)
printf("and is greater than 5 /n");
return (0);
}
