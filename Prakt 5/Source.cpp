#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "������ char : " << sizeof(char) << endl;
	cout << "������ int : " << sizeof(int) << endl;
	cout << "������ short int : " << sizeof(short int) << endl;
	cout << "������ long int : " << sizeof(long int) << endl;
	cout << "������ float : " << sizeof(float) << endl;
	cout << "������ double : " << sizeof(double) << endl;
	cout << "������ wchar_t : " << sizeof(wchar_t) << endl;
	getchar();
	return 0;
}
