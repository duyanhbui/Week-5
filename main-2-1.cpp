#include <iostream>

extern  int fishing_fine_lookup(int over);

int main(int argc, char **argv){
  int over=0;
  std :: cout << "my fishing fine is: " << fishing_fine_lookup(over) << std :: endl;
  over=10;
  std :: cout << "my fishing fine is: " << fishing_fine_lookup(over) << std :: endl;
  over=21;
  std :: cout << "my fishing fine is: " << fishing_fine_lookup(over) << std :: endl;
  over=50;
  std :: cout << "my fishing fine is: " << fishing_fine_lookup(over) << std :: endl;
}