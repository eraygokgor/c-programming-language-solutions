#include <stdio.h>

#define BUFFER 10

int main(void)
{
    int histogram[BUFFER], a, max_hist_el;
    char c;

    for (int i = 0; i < BUFFER; ++i)
    {
        histogram[i] = 0;
    }

    int current_word_length = 0;
    while((c = getchar()) !=  EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n' || c == EOF)
        {
            if (current_word_length > 0)
            {
                ++histogram[current_word_length-1];
                if (max_hist_el < histogram[current_word_length-1])
                {
                    max_hist_el = histogram[current_word_length-1];
                }
                current_word_length = 0;
            }
            
        }
        else
        {
            ++current_word_length;
        }
    }
    printf("\nHorizontal Histogram\n");
    for (int i=0; i < BUFFER; i++)
    {
        printf("%3d: \t", i + 1);
        for (int j=0; j < histogram[i]; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\nVertical Histogram\n");
    for (int l = max_hist_el; 0 < l; l--)
    {
        for (int k = 0; k < BUFFER; k++)
        {
            if (histogram[k] >= l)
            {
                printf("#");
            }
        }
        printf("\n");
    }
    for (int k = 0; k < BUFFER; k++)
    {
        printf("%d", k+1);
    }

}