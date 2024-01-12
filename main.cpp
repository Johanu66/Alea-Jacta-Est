#include <iostream>
#include "basic-encrypt.h"

int main(){
  BasicEncrypt enc;
  enc.read("./plain.txt", PLAIN);

  enc.encode();

  enc.write("./cipher.txt", CIPHER);
  std::cout << enc;
  return 0;
}