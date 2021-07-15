#include <stdio.h>
#include <string.h>

void del_vow(char *line);

int main()
{
    char line[100];

    puts("Enter sentence < 100 chars: \n");
    gets(line);

    del_vow(line);
    puts("Sentence after deleted line is: ");
    puts(line);
}

void del_vow(char *line)
{
    int i, j;

    for (i = 0; line[i] != '\0'; i++)
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
        {
            for (j = i; line[j] != '\0'; j++)
                line[j] = line[j + 1];
                i--;
        }
    
}