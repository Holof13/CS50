#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

char cipher(char c, string key);

string strlow(string str);

int main(int argc, string argv[])
{   
    // We check if the user provided 1 extra argument.
    if (argc != 2)
    {
        printf("Usage ./substitution [key] [plaintext]");
        printf("\n");
        return 1;
    };

    // String to cipher as a test.
    const string test_string = "Hello, world!";

    // Change this if you want the user to provide
    // their own text.
    string plaintext = test_string;

    // We change all the characters in the key
    // to lowercase.
    string key = strlow(argv[1]);

    // Initialize a string variable to store
    // the text in.
    string ciphertext;

    printf("Plaintext: %s\nCiphertext: ", plaintext);

    // For every character in plaintext, cipher and 
    // show it to the user.
    for(int i = 0; plaintext[i]; i++)
    {
        printf("%c", cipher(plaintext[i], key));
    }
    // Fix null character at the end in gcc compiler.
    printf("\n");

    // Return 0, meaning no error.
    return 0;
};

char cipher(char c, string key)
{   
    // We use the alphabet to get the index.
    const string abc = "abcdefghijklmnopqrstuvwxyz";

    // Before turning the character to lowercase,
    // we save if the character is lowecase.
    int c_case = islower(c);
    c = tolower(c);

    // We create a variable to store the index.
    int index = 0;

    // We go through the alphabet and check if there's
    // any match. If we find a match, we save that index.
    for (int i = 0; i < strlen(abc); i++)
    {
        if(abc[i] == c)
        {
            index = i;
            // Once we find a match, we check if the
            // original character was upper or lower case.
            // If it was an upper, we return the ciphed char
            // but upper case.
            if (c_case)
            {   

                return key[index];
            }
            else 
            {
                return toupper(key[index]);
            }
        }
    }
    // If we do not find a match. We return the original char.
    // Using this we deal with non alphabetical characters.
    return c;
};

// Function to transform all chars in a string into lower.
string strlow(string str)
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}
