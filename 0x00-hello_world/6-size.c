#include<stdio.h>

/**
 * main - Entry point
 * Description:printf funt
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

int printf("Size of a char: %ul byte(s)\n", sizeof(char));
int printf("Size of an int: %ul byte(s)\n", sizeof(int));
int printf("Size of a long int: %ul byte(s)\n", sizeof(long int));
int printf("Size of a long long int: %ul byte(s)\n", sizeof(long long int));
int printf("Size of a float: %ul byte(s)\n", sizeof(float));

return (0);
}
