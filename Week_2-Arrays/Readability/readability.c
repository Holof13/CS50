// Formula to find the grade of reading ability of each text

// index = 0.0588 * L - 0.296 * S - 15.8
// L is number of letters per 100 words
// S number of sentences per 100 words

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int Sn = 0;
    int Wn = 0;
    int Ln = 0;


    string text = get_string("Text: ");

    // for (int i = 0; i < strlen(text); i++)
    // {
    //     char c = text[i];
    //     printf("%c", c);
    // }
    
    for (int i = 0; i < strlen(text); i++)
    {   
        char c = text[i];

        if (c == '.') {
            Sn += 1;
        };

        if (c == ' ') {
            Wn += 1;
        }

        else {
            Ln += 1;
        }

    };
    int L = (Ln / Wn) * 100;

    int S = (Sn / Wn) * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;

    printf("%f", index);

}