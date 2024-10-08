#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        if (len > max) {
            max = len;
            copy(longest, line);
        }

        printf("length: %d\n", len);
    }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

int get_line(char line[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    while(c != EOF && c != '\n')
    {
        ++i;
        c = getchar();
    }
    return i;
}

void copy(char to[],  char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}