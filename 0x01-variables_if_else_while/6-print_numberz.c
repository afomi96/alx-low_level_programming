#include <stdio.h>

 /**
 * main - Prints all possible combinations of two two-digit numbers,
 *		ranging from 0-99, separated by a comma followed by a space.
 *
 * Description: main
 *
 * Return: Always 0.
 *
 */

int main(void)
{
		int num;

		for (num = 0; num < 10; num++)
			putchar((num % 10) + '0');

		putchar('\n');

		return (0);
}
