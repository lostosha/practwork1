#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	cout << "Enter R: ";
	int R;
	cin >> R;
	cout << "The diameter is " << (R * 2) << endl;

	return 0;
}

