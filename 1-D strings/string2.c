#include <stdio.h>
#include <string.h>

int main()
{
    char sen[100];
    int i;

    printf("Enter sentence(should be less than 100 chars) : ");
    gets(sen);

    printf("how many chars do you want to extract line? ");
    scanf("%d", &i);

    i--;
    if (i < 0)
        i = 0;

    printf("%s \t", &sen[i]);
}s