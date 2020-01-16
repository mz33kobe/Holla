#include <iostream>
#include <string>

using namespace std;
int main() {
	cout << "===================================================== \n";
	cout << "A simple text game in C++! \n";
	cout << "Enter your name to start playing... \n";
	cout << "===================================================== \n";
	cout << "What's your name? \n";
	string naim;
	cin >> naim;
	cout << "Hello " << naim << "! Nice to have you onboard!! \n";
	cout << "How old are you? \n";
	cout << "Enter your age below... \n";
	int age;
	cin >> age;
	if (age < 18) {
		cout << "Sorry. This game cannot be played by people aged " << age << " years! \n";
	}
}