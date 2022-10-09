import 'dart:io';

int main(){

  stdout.write("Hello, What is your name? > ");
  String sName = stdin.readLineSync().toString();
  print("Hello, $sName");
  return 0;

}