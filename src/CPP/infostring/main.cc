//****************
//BEGIN OF IMPORTS
//****************

#include <iostream>
#include <string>
#include <cctype>
#include <sstream>

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

  std::string info = infostr::string_info(argv[1]);
  std::cout << info << std::endl;
}
