#include <stdio.h>
#define MAXSIZE 100

void squeeze(char s1[], char s2[]);

int main(void)
{
    char s1[MAXSIZE] = "abcdefg";
    char s2[MAXSIZE] = "abcd";

    squeeze(s1, s2);

    printf("%s\n", s1);

    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j, k = 0;
    for (i = 0; s2[i] != '\0'; ++i)
    {
        for(j = k = 0; s1[j] != '\0'; ++j)
        {
            if (s1[j] != s2[i])
            {
                s1[k++] = s1[j];
            }
        }
        s1[k] = '\0';
    } 
}
