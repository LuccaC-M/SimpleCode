//****************
//BEGIN OF IMPORTS
//****************

#include <iostream>
#include <string>
#include <cctype>
#include "infostr.h"
//**************
//END OF IMPORTS
//**************



int main(int argc, char *argv[]) {
//MISSUSE ERROR HANDELING
  if (argc != 2) {
    std::cout
      << "Usage: \n"
      << "  ./{name of the exe} {string}\n";
    return 1;
  }

// assing value to infArgvInfo
  infostr infArgvInfo;
  infArgvInfo.sText = argv[1] ;
  infArgvInfo.string_info();
//Printing the information
  infArgvInfo.printf_info();
}
