#include "basic-encrypt.h"

void BasicEncrypt::encode(){
  _cipher = _plain;
}

void BasicEncrypt::decode(){
  _plain = _cipher;
}