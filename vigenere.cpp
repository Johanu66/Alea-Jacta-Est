#include "vigenere.h"

Vigenere::Vigenere(std::string key){
  for(long unsigned int i=0; i < key.size(); i++){
    _key.push_back(static_cast<int>(key[i]));
  }
}

void Vigenere::encode(){
  _cipher = _plain;
  for(long unsigned int i=0; i < _plain.size(); i++){
    int codeAscii = static_cast<int>(_plain[i]) + _key[i%_key.size()];
    _cipher[i] = static_cast<char>(codeAscii);
  }
}

void Vigenere::decode(){
  _plain = _cipher;
  for(long unsigned int i=0; i < _cipher.size(); i++){
    int codeAscii = static_cast<int>(_cipher[i]) - _key[i%_key.size()];
    _plain[i] = static_cast<char>(codeAscii);
  }
}