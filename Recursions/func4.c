#include <stdio.h>

void func4(int n){
    if(n == 0){
        return;
    }

    func4(n/2);
    printf("%d",n%2);
}

int main(void){
    func4(21);
    printf("\n");
}