#include <stdio.h>

int func11(int a, int b){
    if(b == 0){
        return 1;
    }
    if(b != 1 /* || b %2 == 0*/){
        func11(a*a , b/2);
    }
    return func11(a*a, b/2)*a;
}

int main(void){
    printf(" %d ", func11(4, 3));
    getchar();
}