#include <stdio.h>
#define MAXLINE 1000

int get_line(char s[], int lim);
void copy(char to[], char from[]);

int main(void)
{
    int len;
    int max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }

        printf("length: %d\n", len);
    if (max > 0)
        printf("%s", longest);
    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
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