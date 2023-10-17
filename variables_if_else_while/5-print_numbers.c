#include <stdio.h>

int main(void)

{
	char n;

	while (n <= '9')

	{
		putchar(n + '0');
		n++;
	}

	putchar('\n');

	return (0);
}
