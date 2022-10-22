import 'dart:core';
import 'dart:io';

bool check_factor(int n, int i) {

  if (n % i == 0) {
        
        return true;
  }
  else {
        return false;
  }
}

void main() {
    stdout.write("Input a integer > ");
    String str = stdin.readLineSync().toString();
    int iNumber = int.parse(str);

    for (int i = 1; i <= iNumber; i++) {
      
      if (check_factor(i,3) && check_factor(i,5)) {
        print("FizzBuzz");
      }
      else if (check_factor(i,3)) {
        print("Fizz");
      }
      else if (check_factor(i,5)) {
        print("Buzz");
      }
      else if (check_factor(i,11)) {
        print("Yes");
      }
      else {
        print(i);
      }
    }
}
