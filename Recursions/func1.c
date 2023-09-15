#include <stdio.h>

int func1(int x, int y){
    if (x == 0)
    {
        return y;
    }
    else{
        return func1(x-1, x+y);
    }
}

int main(void){
    int x = 5, y = 2;
    printf("%d ", func1(x, y));
    printf("\n");
}