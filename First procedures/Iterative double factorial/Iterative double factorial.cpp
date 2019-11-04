#include <iostream>
using namespace std;

int double_factorial(int n);

int main()
{
	int a;
	cin >> a;

	cout << double_factorial(a) << endl;
}

int double_factorial(int n)
{
	if (n == 0)
		return 1;
	int factorial = 1;

	for (int i = n % 2 == 0 ? 2 : 1; i <= n; i += 2)
	{
		factorial *= i;
	}

	return factorial;
}