#include <stdio.h>

int func15(int count){
    printf(" %d \n", count);
    if(count < 3){
        func15(func15(func15(++count)));
    }
    return count;
}

int main(void){
    func15(1);
}