import 'dart:io';

int pow(int iPow, int iNumber) {

  int iTempNumber = iNumber;

  for (int i = 1; i < iPow; i++) {
    iNumber = iNumber * iTempNumber;
  }

  return iNumber;
}
int main() {

  String sTemp;
  int iNumber1, iNumber2;

  stdout.write("What is the first number > ");
  sTemp = stdin.readLineSync().toString();
  iNumber1 = int.parse(sTemp);
  
  stdout.write("What is the second number > ");
  sTemp = stdin.readLineSync().toString();
  iNumber2 = int.parse(sTemp);

  stdout.write("What is the operator > ");
  sTemp = stdin.readLineSync().toString();

  switch("$sTemp") {
    case "+": {
      print(iNumber1 + iNumber2);
      break;
    }
    case "-": {
      print(iNumber1 - iNumber2);
      break;
    }
    case "*": {
      print(iNumber1 * iNumber2);
      break;
    }
    case "/": {
      print(iNumber1 / iNumber2);
      break;
    }
    case "exp":
    case "^": {
      print(pow(iNumber2, iNumber1));
      break;
    }
    default:break;
  }
  return 0;
}