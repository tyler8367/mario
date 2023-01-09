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
// Decide How Many Rows Down
    for (int i = 0; i < n; i++)
    {
        // Right Align Left Pyramid
        for (int l = 0; l < n - i - 1; l++)
        {
            printf(" ");
        }
        // Print Blocks For Left Pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        // Print 2 Spaces Between Pyramids
        printf("  ");
        // Print Blocks For Right Pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
