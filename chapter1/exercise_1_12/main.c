#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    int ch;
    int prev_ch = EOF;

    while ((ch = getchar()) != EOF) {
    if (ch == ' ' || ch == '\t' || ch == '\n') {
        if (prev_ch != ' ' && prev_ch != '\t' && prev_ch != '\n') {
        putchar('\n');
        }
    }
    else {
        putchar(ch);
    }

    prev_ch = ch;
    }
}