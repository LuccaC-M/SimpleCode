#include <iostream>

#define MAX 10000

bool check_factor(int n, int i) {
  if (n % i == 0) {
      return true;
  }
  else {
        return false;
  }
}

int main() {
    
    int iMax;

    do {
        std::cout << "What is the maximum number > ";
        std::cin >> iMax;
    } while (iMax > MAX || iMax <= 0);
    
    for (int i = 1; i <= iMax; i++) {
        
        if (check_factor(i,5) && check_factor(i,3)) {
            std::cout << "FizzBuzz" << std::endl;
        }
        else if (check_factor(i,3)) {
            std::cout << "Fizz" << std::endl;
        }
        else if (check_factor(i,5)) {
            std::cout << "Buzz" << std::endl;
        }
        else {
            std::cout << i << std::endl;
        }

        
    }
}
