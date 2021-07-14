#include <stdio.h>
#include <string.h>

void del_the(char *line);

int main()
{
    char line[100];

    puts("Enter sentence < 100 words: \n");
    gets(line);

    del_the(line);
    printf("Sentence w/ deleted THEs is: \n");
    puts(line);
}

void del_the(char *line)
{

    int i, j;
    for (i = 0; line[i] != '\0'; i++)
    {
        if ((line[i] == 't' || line[i] == 'T') && (line[i + 1] == 'h' || line[i + 1] == 'H') && (line[i + 2] == 'E' || line[i + 2] == 'e') &&
            (line[i + 3] == ' ' || line[i + 3] == '\0'))
        {
            for (j = i; line[j] != '\0'; j++)
                line[j] = line[j + 4];
        }
    }
}
