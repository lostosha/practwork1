#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	cout << "Введите A и B: ";
	int A, B;
	cin >> A >> B;
	if (A != 0 && B % A == 0) {
		cout << "A - делитель B";
	}
	else {
		cout << "A - не делитель B";
	}
	return 0;
}


