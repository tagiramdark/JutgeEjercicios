#include <iostream>
using namespace std;


int main() {
	int a1, b1, a2, b2,ar,br;
	cin >> a1>> b1>> a2>> b2;
	if (a2> b1 || a1 > b2)
		cout << "[]" << endl;
	else
	{
		ar = a1 > a2 ? a1 : a2;
		br = b1 < b2 ? b1 : b2;
		cout << "[" << ar << "," << br << "]" << endl;
	}
}