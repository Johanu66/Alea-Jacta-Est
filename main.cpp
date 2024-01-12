#include <iostream>
#include "caesar.h"

int main(){
  Caesar enc;
  enc.read("./plain.txt", PLAIN);
  enc.encode();
  enc.write("./cipher.txt", CIPHER);
  std::cout << enc;


  enc.read("./cipher.txt", CIPHER);
  enc.decode();
  enc.write("./plain.txt", PLAIN);
  std::cout << enc;
  return 0;
}