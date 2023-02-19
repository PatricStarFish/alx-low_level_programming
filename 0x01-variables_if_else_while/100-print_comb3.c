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
int c;
int d;
c = 48;
/*putchar to print 0 > 9*/
while (c < 58)
{
putchar(c);
d = 48;
while (d < 58)
{
putchar(d);
d++;
}
c++;
}
putchar('\n');
return (0);
}
