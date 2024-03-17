#include "Truckloads.h"

Truckloads::Truckloads(){};
Truckloads::~Truckloads(){};

int Truckloads::numTrucks(int numCrates, int loadSize){
  if(numCrates < 2 || numCrates > 10000){
    return -1;
  };
    if(numCrates <= loadSize){
      return 1;
    };
  int h1 = numCrates / 2;
  int h2 = numCrates - h1;
  return numTrucks(h1, loadSize) + numTrucks(h2, loadSize);
};