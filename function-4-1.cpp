#include "function-4-1.h"

class BusCounter{
public:
  int bus_count; // current count of people in the bus
  int capacity; // maximum capacity of the bus

  BusCounter(int cap){
    bus_count = 0;
    capacity = cap;
  } 
  void passenger_board(){
    bus_count += 1;
    capacity -= 1;
  }  // person tries to board the bus increments bus_count by one if bus_count < capacity
  void passenger_exit(){
    bus_count -= 1;
    capacity += 1;
  }   // person exits bus - decrements bus_count by one if bus has more than zero people.
  int get_count(){
    return bus_count;
  } // returns the current count of people in the bus. 

};