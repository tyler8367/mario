#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int (n);
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
// For each row
    for (int i = 0; i < n; i++)
    {
        // Each Space
        for (int l = 0; l < n - i - 1; l++)
        {
            printf(" ");
        }
        // Each Column
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
