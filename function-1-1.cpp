#include <iostream>

int *left_shift(int *vals, int len, int amount){
    for(int i = 0; i < len;i++){
        if(amount + i >= len){
            *(vals + i) = 0;
            
        }else {
            
        *(vals + i) = *(vals + amount + i);
        }

    }
    return vals;
}