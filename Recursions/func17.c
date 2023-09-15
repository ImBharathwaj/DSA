#include <stdio.h>

void func17(int n){
    if(n > 0){
        func17(n-1);
        printf(" %d ", n);
        func17(n-1);
    }
}

int main(void){
    func17(4);
    printf("\n");
}