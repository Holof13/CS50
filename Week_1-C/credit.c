#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

string type_check(string number);

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
            sum = sum + digit_int;
            // printf("+>");
        }
        // If the index is not pair, we don't multiply by two.
        else 
        {
            char digit = number[strlen(number) - i - 1];
                        
            int digit_int = digit - '0';
            digit_int = digit_int * 2;
            
            if (digit_int > 9)
            {
                sum = sum + 1 + (digit_int - 10);
            }
            else
            {
                sum = sum + digit_int;
            }
            
            // printf(">");
        };
        // printf("i: %i ", i);
        // printf("Digit: %c", number[strlen(number) - i - 1]);
        
        // printf(" Sum: %i\n", sum);
    };
    // To check if the sum ends with a 0, we divide by 10.
    // If the rest is zero, the card is valid.
    if (sum % 10 == 0)
    {
        printf("%s", type_check(number));
    }
    else
    {
        printf("This card is not valid.");
    };
}

string type_check(string number)
{   
    // The type of card is determined by it's first digit
    // American Express uses 34 or 37
    // Mastercard uses 51 to 55
    // Visa uses 4
    if (number[0] == '3')
    {
        return "American Express";
    };
    if (number[0] == '5')
    {
        return "Mastercard";
    };
    if (number[0] == '4')
    {
        return "VISA";
    }
};