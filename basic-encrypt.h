#ifndef BASIC_ENCRYPT_H
#define BASIC_ENCRYPT_H

#include "encrypt.h"

class BasicEncrypt: public Encrypt{
  public:
    void encode() override;
    void decode() override;
};

#endif