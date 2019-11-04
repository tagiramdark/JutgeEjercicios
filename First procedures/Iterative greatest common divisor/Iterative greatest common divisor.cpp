#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int gcd(int a, int b);

int main()
{
	int x, y;
	cin >> x >> y;

	int maxdiv = gcd(x, y);

	cout << maxdiv<< endl;
}

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}