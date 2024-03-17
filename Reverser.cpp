#include "Reverser.h"
string Reverser::reverseString(string characters){
  if(characters.size() < 1){
    return "ERROR";
  }
  if(characters.size() == 0){
    return "";
  }
  return reverseString(characters.substr(1,characters.size())) + characters[0];
};

int Reverser::reverseDigit(int value){
  if(value < 0){
    return -1;
  }
      static int acc = 0;
      static int base = 1;

      if (value > 0) {
          reverseDigit(value / 10);
          acc += (value % 10) * base; 
          base *= 10;
      }
      return acc;
  };

