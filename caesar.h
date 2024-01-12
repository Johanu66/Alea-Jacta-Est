#ifndef CEASAR_H
#define CEASAR_H

#include "encrypt.h"

class Caesar: public Encrypt{
  public:
    void encode() override;
    void decode() override;
};

#endif