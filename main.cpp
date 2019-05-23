#include <Windows.h>
#include <iostream>
#include <string>

int main() {

	int varInt = 123456;
	std::string varString = "DefaultString";
	char arrChar[128] = "Long char array right there -> ";

	int* ptr2int = &varInt;
	int** ptr2ptr = &ptr2int;
	int*** ptr2ptr2ptr = &ptr2ptr;

	while (true) {
		std::cout << "Process ID: " << GetCurrentProcessId() << '\n' << '\n'
			<< "varInt\t\t (0x" << &varInt << ") = " << varInt << '\n'
			<< "varString\t (0x" << &varString << ") = " << varString << '\n'
			<< "arrChar\t\t (0x" << &arrChar << ") = " << arrChar << '\n' << '\n'
			<< "ptr2int\t\t (0x" << &ptr2int << ") = 0x" << ptr2int << '\n'
			<< "ptr2ptr\t\t (0x" << &ptr2ptr << ") = 0x" << ptr2ptr << '\n'
			<< "ptr2ptr2\t (0x" << &ptr2ptr2ptr << ") = 0x" << ptr2ptr2ptr << '\n' << '\n';

		system("pause");

		std::cout << '\n' << '\n';
		for (int i = 0; i < 10; i++) {
			std::cout << "-----";
		}
		std::cout << '\n' << '\n';
	}
	
	return 0;
}

