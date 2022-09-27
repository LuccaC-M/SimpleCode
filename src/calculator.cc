#include <iostream>

int main() {
//	Used variables
	long num1;
	long num2;
	char oper;
	
//	1st number
	std::cout << "1st number > ";
	std::cin >> num1;
	
//	2nd number
	std::cout << "2nd number > ";
	std::cin >> num2;
	
//	asking for operation
	std::cout << "Choose operation\n" << "+\n" << "-\n" << "*\n" << "/\n" << "%\n" << "> ";
	std::cin >> oper;
	
// matching oper to and operation	
	switch(oper) {
		case '+':
			std::cout << num1 + num2 << std::endl;
			break;
		case '-':
			std::cout << num1 - num2 << std::endl;
			break;
		case '*':
			std::cout << num1 * num2 << std::endl;
			break;
		case '/':
			std::cout << num1 / num2 << std::endl;
			break;
		default:
			std::cout << "Invalid operator";
			return 1;
	}
	return 0;
}
