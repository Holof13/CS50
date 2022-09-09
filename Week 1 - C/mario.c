#include <cs50.h>
#include <stdio.h>

int main(void)
{  
    int height = get_int("Height: ");

    // Main loop to create rows
    for (int i = 1; i < height + 1; i++)
    {   
        // Save the current row number 
        int curr = i;

        // Generate the space before every brick
        // spaces + left bricks = height
        for (int i = 1 ; i < height - curr + 1; i++)
        {
            printf(" ");
        };

        // Generate left bricks
        for (int i = 1 ; i < curr + 1; i++)
        {
            printf("#");
        };

        // Generate the gap
        printf(" ");

        // Generate right bricks
        for (int i = 1 ; i < curr + 1; i++)
        {
            printf("#");
        };

        // Switch to the next row
        printf("\n");
    }
}