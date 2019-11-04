#include <iostream>
using namespace std;



int main() {
	int year;
	int k, x, b, c, q, p, y, z, n, e;
	while (cin >> year)
	{
		k = year / 100;
		x = year % 19;
		b = year % 4;
		c = year % 7;
		q = k / 4;
		p = (13 + 8*k) / 25;
		y = (15 - p + k - q) % 30;
		z = (19*x + y) % 30;
		n = (4 + k - q) % 7;
		e = (2 * b + 4 * c + 6 * z + n) % 7;
			if (z + e <= 9) {
				cout << 22 + z + e << "/" << 3 << endl;
			}
			else if(z == 29 && e == 6) {
				cout << 19 << "/" << 4 << endl;
			}
			else if (z == 28 && e == 6&&x>10) {
				cout << 18 << "/" << 4 << endl;
			}
			else  {
				cout << z+e-9 << "/" << 4 << endl;
			}
	}

}