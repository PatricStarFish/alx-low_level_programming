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
c = 122;
while (c > 96)
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
