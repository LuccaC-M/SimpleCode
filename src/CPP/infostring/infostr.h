//BEGIN OF IMPORTS
//****************

#include <iostream>
#include <string>
#include <cctype>

//**************
//END OF IMPORTS
//**************
//SAMPLE "\033[3;42;30mTexting\033[0m\t\t"
class infostr {
  public:
      // PUBLIC VARIABLES
      int iSpaces = 0, iLetters = 0, iLowecase = 0, iUppercase = 0;
      int iSpecial = 0, iNumbers = 0, iLength, iOthers = 0;
      std::string sText;
      void printf_info() {
        std::cout
          << "\033[34m========================\033[0m\n"
          << "          INFO\n"
          << "\033[34m========================\033[0m\n"
          << "\033[35mSpaces: " << iSpaces << std::endl
          << "Letters: " << iLetters << std::endl
          << " | Lowercase: " << iLowecase << std::endl
          << " | Uppercase: " << iUppercase << std::endl
          << "Numbers: " << iNumbers << std::endl
          << "Special: " << iSpecial << std::endl
          << "Others: " << iOthers << std::endl
          << "Length: " << iLength << std::endl
          << "\033[0m" << std::endl;
      }
      void string_info();
};

void infostr::string_info() {  
//  Defining current lenght
    iLength = sText.length();
//  For loop to get the information
  for (int i = 0; i < iLength; i++) {
//  Checking for type of char    
    if(isdigit(sText[i])) {
      iNumbers++;
    } else if(isspace(sText[i])) {
      iSpaces++; 
    }else if(islower(sText[i])) {
      iLetters++;
      iLowecase++;
    } else if(isupper(sText[i])) {
      iLetters++;
      iUppercase++;
    } else if (ispunct(sText[i])){
      iSpecial++;
    }else {iOthers++;}
  }
}
