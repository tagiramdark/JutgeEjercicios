#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int h=0, m=0;
	if (a >= 3600) {
		h = a / 3600;
		a -= 3600 * h;
	}
	if (a >= 60) {
		m = a / 60;
		a -= 60 * m;
	}


	cout <<h<<" "<<m<<" "<<a << endl;
}