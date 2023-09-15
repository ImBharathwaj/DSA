#include <stdio.h>

void func7(int x)
{
    if (x > 0)
    {
        func7(--x);
        printf("%d ", x);
        func7(--x);
    }
}

int main(void)
{
    int a = 4;
    func7(a);
    printf("\n");
}