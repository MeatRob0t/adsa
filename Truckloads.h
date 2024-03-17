#include <iostream>
#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H
class Truckloads{
    public:
    Truckloads();
    ~Truckloads();
    int numTrucks(int numCrates, int loadSize);
    int numCrates;
    int loadsize;

};
#endif