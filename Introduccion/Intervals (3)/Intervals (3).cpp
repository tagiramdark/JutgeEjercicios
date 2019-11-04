#include <iostream>
using namespace std;


int main() {
	int a1, b1, a2, b2,ar,br;
	cin >> a1>> b1>> a2>> b2;
	if (a1 == a2 && b1 == b2)
		cout << "=" << " , ";
	else if(a1>=a2&&b1<=b2)
		cout << "1" << " , ";
	else if (a2 >= a1 && b2 <= b1)
		cout << "2" << " , ";
	else
		cout << "?" << " , ";

	if (a2> b1 || a1 > b2)
		cout << "[]" << endl;
	else
	{
		ar = a1 > a2 ? a1 : a2;
		br = b1 < b2 ? b1 : b2;
		cout << "[" << ar << "," << br << "]" << endl;
	}
}