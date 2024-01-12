#ifndef VIGENERE_H
#define VIGENERE_H

#include "encrypt.h"
#include <vector>

class Vigenere: public Encrypt{
  private:
    std::vector<int> _key;
  public:
    Vigenere(std::string key);
    void encode() override;
    void decode() override;
};

#endif