#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int gcd(int a, int b);
int gcd4(int a, int b, int c, int d);
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << gcd4(a, b, c, d) << endl;
}
int gcd4(int a, int b, int c, int d)
{
	int gcd0 = gcd(a, b), gcd1 = gcd(c, d);
	return gcd(gcd0, gcd1);
}
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}