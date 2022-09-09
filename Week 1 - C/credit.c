#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{   

    string number = get_string("Please input your credit card:");

    int sum = 0;

    for (int i = 0; i < strlen(number); i++){
        if (i % 2 == 0)
        {
            char digit = number[strlen(number) - i - 1];
            int digit_int = digit - '0';

            sum = sum + (digit_int * 2);
        }
        else {
            char digit = number[strlen(number) - i - 1];
            int digit_int = digit - '0';

            sum = sum + digit_int;
        };
    };

    if (sum % 10 == 0){
        printf("This card is valid.");
    }
    else
    {
        printf("This card is not valid.");
    }
};
