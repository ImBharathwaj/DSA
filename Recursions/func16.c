#include <stdio.h>

int func16(int n, int *fp)
{
    int t, f;
    if (n <= 2)
    {
        *fp = 1;
        return 1;
    }
    t = func16(n - 1, fp);
    f = t + *fp;
    *fp = t;
    return f;
}

int main(void)
{
    int x = 15;
    printf(" %d \n", func16(3, &x));
}