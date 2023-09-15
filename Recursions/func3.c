#include <stdio.h>

int func3(int n){
    if(n == 1){
        return 0;
    }else{
        return 1+func3(n/2);
    }
}

int main(void){
    printf("%d \n",func3(10));
}