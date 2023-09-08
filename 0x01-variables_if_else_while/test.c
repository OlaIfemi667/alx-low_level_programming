#include <stdio.h>

int main(void)
{
    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            for (k = j + 1; k < 10; k++)
            {
                printf("%d%d%d", i, j, k);

                if (i != 7 || j != 8 || k != 9)
                {
                    printf(", ");
                }
            }
        }
    }

    putchar('\n');
    return (0);
}


