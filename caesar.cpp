#include "caesar.h"

void Caesar::encode(){
  _cipher = _plain;
  for(long unsigned int i=0; i < _plain.size(); i++){
    int codeAscii = static_cast<int>(_plain[i])+3;
    _cipher[i] = static_cast<char>(codeAscii);
  }
}

void Caesar::decode(){
  _plain = _cipher;
  for(long unsigned int i=0; i < _cipher.size(); i++){
    int codeAscii = static_cast<int>(_cipher[i])-3;
    _plain[i] = static_cast<char>(codeAscii);
  }
}