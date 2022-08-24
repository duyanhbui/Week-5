#include <iostream>

extern  int integers_in_range(int vals[], int length, int bottom, int top);

int main(int argc, char **argv){
    int vals[]={1,7,3,4,6,5,2};
    int res=integers_in_range(vals,7,3,6);
}