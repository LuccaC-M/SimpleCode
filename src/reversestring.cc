#include <iostream>
#include <string>

std::string reverse_string(std::string sText) {

    std::string sReversed;
    int iLength = sText.length();
    
    for (int i = iLength; i >= 0; i--) {
        sReversed = sReversed + sText[i];
    }
    return sReversed;
}

int main(int argc, char* argv[]) {

    if (argc != 2) {
        std::cout 
            << "Usage: "
            << "    ./reversestring {text}"
            << std::endl;
        
        return 1;
    }
    std::string sText = argv[1];
    
    std::string sReversed = reverse_string(sText);

    std::cout << sReversed << std::endl;
}