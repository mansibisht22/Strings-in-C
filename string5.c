#include <stdio.h>
#include <string.h>
int main()
{
    char sen[100];

    int i, count;

    printf("Enter sentence: \n");
    gets(sen);

    printf("No. of occurrences of recurring vowels: \n");

    while (sen[i] != '\0')
    {

        if (sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u')
        {
            if (sen[i + 1] == 'a' || sen[i + 1] == 'e' || sen[i + 1] == 'i' || sen[i + 1] == 'o' || sen[i + 1] == 'u')
            {

                count++;
                printf("%c %c \n", sen[i], sen[i + 1]);
            }
        }
        i++;
    }
    printf("Recurrence of vowel: %d", count);
}