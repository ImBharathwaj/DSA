#include <stdio.h>

int func10(int a, int b)
{
    if (b == 0)
        return 0;
    if (b % 2 == 0)
        printf("%d - %d",a ,b);
        return func10(a + a, b / 2);
    printf("%d - %d",a ,b);
    return func10(a + a, b / 2) + a;
}

int main(void)
{
    printf(" %d ", func10(4,3));
    func10(4,3);
    getchar();
    // return 0;
}