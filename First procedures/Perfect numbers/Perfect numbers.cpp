#include <cmath>
#include <iostream>
using namespace std;
bool is_perfect(int n);
int main()
{
	int n;
	cin >> n;
	cout << is_perfect(n) << endl;
}
bool is_perfect(int n) {
	int sum = 0;

	for (int i = 1; i <= (sqrt(n)); i++) {
		if (n % i == 0 && i != n) {			
				sum += i;
				if (i != (n / i) && (n / i) != n) {
					sum += (n / i);
				}
			
		}
	}
	
	return (n != 0 && sum == n);
}