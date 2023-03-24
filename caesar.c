#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//This will prompt user for Caesar and key number
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
//Number key only for function to work
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

    }

//This will prompt user for Plaintext
//prints ciphertext after and input
//k = key
    int k = atoi(argv[1]);

    string plaintext = get_string("Plaintext: ");

    printf("Ciphertext: ");

    for (int p = 0; p < strlen(plaintext); p++)
    {
//Manipulates Lower and uppercase to produce ciphertext
        if (isupper(plaintext[p]))
        {
            printf("%c", (plaintext [p] - 65 + k) % 26 + 65);
        }
        else if (islower(plaintext[p]))
        {
            printf("%c", (plaintext[p] - 97 + k) % 26 + 97);
        }

        else
        {
            printf("%c", plaintext[p]);
        }
    }
    printf("\n");
}
