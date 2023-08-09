//BEGIN OF IMPORTS
//****************

#include <iostream>
#include <string>
#include <cctype>
#include <sstream>

//**************
//END OF IMPORTS
//**************

namespace infostr {
  std::string string_info(std::string text) {  
    //  Defining current lenght
    int length = text.length();
    int spaces = 0, letters = 0, lowercase = 0, uppercase = 0;
    int punctuation = 0, numbers = 0, others = 0;
    //  For loop to get the information
    for (int i = 0; i < length; i++) {
      //  Checking for type of character   
      if (isdigit(text[i])) {
        numbers++;
      } 
      else if (isspace(text[i])) {
        spaces++; 
      }
      else if (islower(text[i])) {
        letters++;
        lowercase++;
      }
      else if (isupper(text[i])) {
        letters++;
        uppercase++;
      }
      else if (ispunct(text[i])){
        punctuation++;
      }
      else {others++;}
    }
    std::ostringstream result;
    result << "\033[34m========================\033[0m\n"
          << "          INFO\n"
          << "\033[34m========================\033[0m\n"
          << "\033[35mSpaces: " << spaces << std::endl
          << "Letters: " << letters << std::endl
          << " | Lowercase: " << lowercase << std::endl
          << " | Uppercase: " << uppercase << std::endl
          << "Numbers: " << numbers << std::endl
          << "Special: " << punctuation << std::endl
          << "Others: " << others << std::endl
          << "Length: " << length << std::endl
          << "\033[0m" << std::endl;
    return result.str();
  }
}
