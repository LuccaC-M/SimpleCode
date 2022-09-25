#include <iostream>

int main() {

	long num1;
	long num2;
	char oper;
	
	std::cout << "1st number > ";
	std::cin >> num1;
	
	std::cout << "2nd number > ";
	std::cin >> num2;

	std::cout << "Choose operation\n" << "+\n" << "-\n" << "*\n" << "/\n" << "%\n" << "> ";
	std::cin >> oper;
	
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
