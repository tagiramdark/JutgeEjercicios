#include <iostream>
using namespace std;


int absolute(int n);


int main() {
	int n;
	cin >> n;
	cout << absolute(n) << endl;
}
int absolute(int n) {
	if (n > 0)
		return n;
	else
		return n - 2*n;
}