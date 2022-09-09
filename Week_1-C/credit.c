#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{   
    // Prompt user for input.
    string number = get_string("Please input your credit card:");

    // Create variable to store the sum through the loop.
    int sum = 0;

    // For every character in the number, we loop.
    for (int i = 0; i < strlen(number); i++){
        // We check if the index is pair to see if we multiply by two.
        if (i % 2 == 0)
        {   
            // Store the number as a character, iterating
            // through the string from right to left.
            char digit = number[strlen(number) - i - 1];
            // Save the digit as an int.
            int digit_int = digit - '0';
            // Save the sum, multiplying by two before.
            sum = sum + (digit_int * 2);
        }
        // If the index is not pair, we don't multiply by two.
        else {
            char digit = number[strlen(number) - i - 1];
            int digit_int = digit - '0';

            sum = sum + digit_int;
        };
    };
    // To check if the sum ends with a 0, we divide by 10.
    // If the rest is zero, the card is valid.
    if (sum % 10 == 0){
        printf("This card is valid.");
    }
    else
    {
        printf("This card is not valid.");
    }
};
