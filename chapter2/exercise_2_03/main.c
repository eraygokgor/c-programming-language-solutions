#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAXLINE 100;

int htoi(char hex[]);

int main(void)
{
    char hex[] = "0x1f4def";
    int res = htoi(hex);
    printf("%d\n", res);
}

int htoi(char hex[])
{
    int integer = 0;
    int i = 0;
    int len = strlen(hex);

    while (i < len)
    {
        if (hex[i] == '0' && tolower(hex[i+1]) == 'x')
            i += 2;
        else if (hex[i] >= '0' && hex[i] <= '9')
        {
            integer += (int)(hex[i] - 48) * (int)pow(16, len - i - 1);
            i++;
        }
        else if (tolower(hex[i]) >= 'a' && tolower(hex[i]) <= 'f')
        {
            integer += (int)(tolower(hex[i]) - 'a' + 10) * (int)pow(16, len - i -1);
            i++;
        }
    }
    return integer;
}
    