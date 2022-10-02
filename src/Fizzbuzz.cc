#include <iostream>

#define MAX 10000

int main() {
    
    int iMax;

    do {

        std::cout << "What is the maximum number > ";
        std::cin >> iMax;
    } while (iMax > MAX || iMax <= 0);
    
    for (int i = 1; i <= iMax; i++) {
        
        if (i % 5 == 0 && i % 3 == 0) {
            std::cout << "FizzBuzz" << std::endl;
        }
        else if (i % 3 == 0) {
            std::cout << "Fizz" << std::endl;
        }
        else if (i % 5 == 0) {
            std::cout << "Buzz" << std::endl;
        }
        else {
            std::cout << i << std::endl;
        }

        
    }
}