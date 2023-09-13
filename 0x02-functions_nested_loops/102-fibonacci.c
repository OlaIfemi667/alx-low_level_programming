#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void generateFibonacci(int n);

void generateFibonacci(int n)
{
       	int fib[n], i;
	fib[0] = 1;
	fib[1] = 2;
	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", fib[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
int main(void)
{
	generateFibonacci(50);
	return 0;
}
