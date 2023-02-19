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
d = 48;
while (d < 58)
{
if (c != d)
{
putchar(c);
putchar(d);
putchar(44);
putchar(32);
}
d++;
}
c++;
}
putchar('\n');
return (0);
}
