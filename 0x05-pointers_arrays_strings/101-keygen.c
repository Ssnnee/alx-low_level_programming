#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[12];
    int i;

    srand(time(NULL)); // seed the random number generator

    // generate first character (capital letter)
    password[0] = rand() % 26 + 'A';

    // generate next two characters (digits)
    for (i = 1; i <= 2; i++) {
        password[i] = rand() % 10 + '0';
    }

    // generate next two characters (small letters)
    for (i = 3; i <= 4; i++) {
        password[i] = rand() % 26 + 'a';
    }

    // generate next two characters (other characters)
    for (i = 5; i <= 6; i++) {
        password[i] = rand() % 15 + 33; // ASCII values for special characters
    }

    // generate last four characters (alternating digits and small letters)
    for (i = 7; i <= 10; i++) {
        if (i % 2 == 1) {
            password[i] = rand() % 10 + '0';
        } else {
            password[i] = rand() % 26 + 'a';
        }
    }

    password[11] = '\0'; // add null terminator

    printf("%s\n", password); // print the generated password

    return 0;
}
