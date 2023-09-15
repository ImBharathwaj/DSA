#include <stdio.h>

int func8(int a[], int n)
{
    int x;
    if (n == 1)
    {
        return a[0];
    }
    else
    {
        x = func8(a, n - 1);
    }
    if (x > a[n - 1])
    {
        return x;
    }
    else
    {
        return a[n - 1];
    }
}

int main(void)
{
    int arr[] = {12, 10, 30, 50, 100};
    printf(" %d ", func8(arr, 5));
    getchar();
    return 0;
}