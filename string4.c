#include <stdio.h>
#include <string.h>
int main()
{

    char isbn[10];
    int sum = 0, i;

    printf("Enter 10 Digit ISBN no.: ");
    gets(isbn);

    for (i = 0; i < 9; i++)
    {
        isbn[i] = isbn[i] - 48; //Convert string to integer
        sum = sum + ((i + 1) * isbn[i]);
    }
    printf("CHECKSUM: %d \n", sum);

    if (sum % 11 == 0)
    {
        printf("VALID ISBN NUMBER! \n");
    }

    else
    {
        printf("NOT A VALID ISBN NUMBER. \n");
    }
}