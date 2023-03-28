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
    char password[13]; /* increase array size to accommodate null terminator*/

    srand(time(NULL)); /* seed the random number generator*/

    /* generate first character (capital letter) */
    password[0] = rand() % 26 + 'A';

    /* generate next two characters (digits) */
    for (int i = 1; i <= 2; i++) {
        password[i] = rand() % 10 + '0';
    }

    /* generate next two characters (small letters) */ 
    for (int i = 3; i <= 4; i++) {
        password[i] = rand() % 26 + 'a';
    }

    /* generate next two characters (special characters) */
    for (int i = 5; i <= 6; i++) {
        password[i] = rand() % 15 + 33; /* ASCII values for special characters */ 
    }

    /* generate next two characters (uppercase letters) */
    for (int i = 7; i <= 8; i++) {
        password[i] = rand() % 26 + 'A';
    }

    /* generate last three characters (alternating digits, uppercase letters and small letters) */ 
    for (int i = 9; i <= 11; i++) {
        if (i % 3 == 0) {
            password[i] = rand() % 10 + '0';
        } else if (i % 3 == 1) {
            password[i] = rand() % 26 + 'a';
        } else {
            password[i] = rand() % 26 + 'A';
        }
    }

    password[12] = '\0'; /* add null terminator */ 

    printf("%s\n", password); /* print the generated password */ 

    return 0;
}
