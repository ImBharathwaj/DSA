#include <stdio.h>

int func12(int n){
    if(n > 100){
        return n - 10;
    }
    return func12(func12(n+11));
}

int main(void){
    printf(" %d ", func12(99));
    getchar();
}