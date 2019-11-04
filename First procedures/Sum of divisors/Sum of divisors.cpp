#include <cmath>
#include <iostream>
using namespace std;
int sum_divisors(int x);
int main()
{
	int n;
	cin >> n;
	cout << sum_divisors(n) << endl;
}
int sum_divisors(int x) {
	int sum = 0;
	for (int i = 1; i <= (sqrt(x)); i++) {		
		if (x % i == 0 && i != x) {
			sum += i;
			if (i != (x / i) && (x / i) != x) {
				sum += (x / i);
			}

		}
	}
	sum += x;
	return sum;
}