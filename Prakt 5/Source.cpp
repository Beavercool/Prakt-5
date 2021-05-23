#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Размер char : " << sizeof(char) << endl;
	cout << "Размер int : " << sizeof(int) << endl;
	cout << "Размер short int : " << sizeof(short int) << endl;
	cout << "Размер long int : " << sizeof(long int) << endl;
	cout << "Размер float : " << sizeof(float) << endl;
	cout << "Размер double : " << sizeof(double) << endl;
	cout << "Размер wchar_t : " << sizeof(wchar_t) << endl;
	getchar();
	return 0;
}
