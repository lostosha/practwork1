#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	cout << "Enter M, N: ";
	int M, N;
	cin >> M >> N;
	if (M > N) cout << "Number m > n" << endl;
	else if (M < N) cout << "Number m < n" << endl;
	else cout << "The numbers are equal" << endl;

	return 0;
}
