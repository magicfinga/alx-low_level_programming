#include <stdio.h>

/**
 *   main - Prints numbers between 0 to 9 and letters between a to f.
 *    main - Prints numbers between 0 to 9 with commas and spaces.
 *
 *    Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)

{
putchar(i);
if (i != 57)
{
																	putchar(' ');
																	putchar(',');
																	putchar(' ');
}
}
putchar('\n');
return (0);
}
