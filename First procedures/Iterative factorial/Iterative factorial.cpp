#include <iostream>
using namespace std;

int factorial(int n);

int main() {
	int a;
	cin >> a ;

	cout <<factorial(a) << endl;
}

int factorial(int n) {
	if (n == 0)
		return 1;
	int factorial = 1;
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	return factorial;
}