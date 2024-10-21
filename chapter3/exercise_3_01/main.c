#include <stdio.h>
#include <time.h>

#define MAXLEN 1000

int binarysearch(int x, int v[], int n);
int binarysearch2(int x, int v[], int n);

int main(void)
{   
    clock_t start1, end1, start2, end2;
    double cpu_time_used1, cpu_time_used2;
    int v[MAXLEN];

    for (int i=0; i < MAXLEN; ++i)
        v[i] = i;
    
    start1 = clock();
    printf("result: %d\n", binarysearch(500, v, MAXLEN));
    end1 = clock();
    cpu_time_used1 = ((double) (end1 - start1)) / CLOCKS_PER_SEC;
    printf("time elapsed: %f\n", cpu_time_used1);

    start2 = clock();
    printf("result: %d\n", binarysearch2(500, v, MAXLEN));
    end2 = clock();
    cpu_time_used2 = ((double) (end2 - start2)) / CLOCKS_PER_SEC;
    printf("time elapsed: %f\n", cpu_time_used2);

    return 0;
}

int binarysearch(int x, int v[], int n)
{
    int low, high, mid;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int binarysearch2(int x, int v[], int n)
{
    int low, high, mid;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    if (x == v[low - 1])
        return low - 1;
    }
    return -1;
}