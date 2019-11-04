#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	double a;
	cin >> a;

	int b = floor(a);
	int c = ceil(a);
	int d = round(a);

	cout << b << " " << c << " " << d << endl;
}