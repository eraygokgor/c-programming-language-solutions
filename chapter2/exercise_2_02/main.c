#include <stdio.h>

int main(void)
{
    int lim = 100;
    int go_on = 1;
    char c;

    while (go_on)
    {
        if ((c = getchar()) != '\n')
        {   
            if (c != EOF)
                ;
            else
                go_on = 0;
        }
        else
        {
            go_on = 0;
        }
        putchar(c);
    }
    return 0;
}