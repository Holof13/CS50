#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("Height: ");

    for (int i = 1; i < height + 1; i++)
    {   
        int curr = i;

        for (int i = 1 ; i < height - curr + 1; i++)
        {
            printf(" ");
        };

        for (int i = 1 ; i < curr + 1; i++)
        {
            printf("#");
        };

        printf(" ");

        for (int i = 1 ; i < curr + 1; i++)
        {
            printf("#");
        };

        printf("\n");
    }
}