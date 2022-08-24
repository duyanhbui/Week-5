#include <iostream>

extern  int *left_shift(int *vals, int len, int amount);

int main(int argc, char **argv){
    int vals[]={1,2,3,4,5};
    int *sv=left_shift(vals,5,2);
    
    for(int i = 0; i < 5;i++){
        std :: cout << *(sv + i) << " ";
}
}