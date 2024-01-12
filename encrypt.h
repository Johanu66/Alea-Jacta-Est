#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <iostream>
#include "file-content.h"

class Encrypt{
  protected:
    std::string _plain;
    std::string _cipher;
  public:
    std::string plain() const;
    std::string cipher() const;
    virtual void encode();
    virtual void decode();
    void read(std::string file, FileContent content);
    void write(std::string file, FileContent content);
};

std::ostream& operator<<(std::ostream& os, const Encrypt& enc);

#endif