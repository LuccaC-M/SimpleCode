#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
//	If there is no arguments ask for name
	if (argc == 1) {
		cout << "Hello, what is your name? > ";

		string name;
		cin >> name;
		cout << "Hello, " << name << endl;
	} else {
//  Else print argument
		cout << "Hello, " << argv[1] << endl;
	}
}
