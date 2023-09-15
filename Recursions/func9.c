#include <stdio.h>

int func9(int i){
    if(i % 2) return (i++);
    else return func9(func9(i-1));
}

int main(){
    printf(" %d ", func9(200));
    getchar();
}