#include <stdio.h>

void func5(int n){
    int i = 0;
    if(n > 1){
        func5(n-1);
    }
    for(i = 0; i < n; i++){
        printf("*");
    }
    printf("\n");
}

int main(void){
    func5(10);
}