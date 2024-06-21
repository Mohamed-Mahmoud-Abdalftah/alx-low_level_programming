#include <stdio.h>

/**
 * main - Prints the alphabet in reverse order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Variable declaration */
	char letter;

	/* Loop to print alphabet in reverse */
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n'); /* Print newline at the end */

	return (0); /* Return success */
}
