#include <iostream>


int integers_in_range(int vals[], int length, int bottom, int top){
    int res[top-bottom + 1];
    for (int i  = 0; i <= top-bottom+1; i++){
        if ((i + bottom) <= top){
            res[i] = vals[i + bottom];
        }
        
    }
    return res;
}