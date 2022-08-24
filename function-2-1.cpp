#include <iostream>

int fishing_fine_lookup(int over){
    if (over <= 0){
        return 0;
    }
    else if (0 < over < 10)
    {
        return 180;
    }
    else if (10 <= over < 20)
    {
        return 406;
    }
    else if (20 <= over < 30)
    {
        return 825;
    }
    else if (30 <= over < 45)
    {
        return 1500;
    }
    else if (over >= 45)
    {
        return 1690;
    }    
}