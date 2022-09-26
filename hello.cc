#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

	if (argc == 1) {
		cout << "Hello, what is your name? > ";

		string name;
		cin >> name;
		cout << "Hello, " << name << endl;
	}
	cout << "Hello, " << argv[1] << endl;
}
