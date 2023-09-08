#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int numbers[10], i, j, k, tmp_k, tmp_j;

    for (i = 0; i < 10; i++)
    {
        numbers[i] = i;
    }

    j = 1;
    k = 2;
    tmp_k = k - 1;
   _j = j - 1;
    i = 0;

    while (i < 10)
    {
        tmp_j = i + 1;
        j = tmp_j;
       	while (j < 10)
	{
		tmp_k = j + 1;
		k = tmp_k;
		while (k < 10)
		{
		    putchar('0' + numbers[i]);
		    putchar('0' + numbers[j]);
		    putchar('0' + numbers[k]);
		    if (i != 7 || j != 8 || k != 9)
		    {
			    putchar(',');
			    putchar(' ');
		    }
		    k++;
		}
	    j++;
	}
	i++;
    }
    putchar('\n');
    return (0);
}

