#include<stdio.h>

/**
 * main - print double digit comos
 *
 * Description: print double digit combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	whiile (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchat(j);

			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}

		i++;
	}

	putchar(10);

	return (0);
}
