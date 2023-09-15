#include <stdio.h>
#define LIMIT 1000

void func6(int n)
{
    if (n <= 0)
    {
        return;
    }
    if (n > LIMIT)
    {
        return;
        printf("\n");
    }
    printf("%d ", n);
    func6(2 * n);
    printf("\n");
    printf("%d ", n);
}

int main(void){
    func6(10);
}