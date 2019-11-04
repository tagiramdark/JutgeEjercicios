#include <iostream>
using namespace std;

int main() {
	char a;
	cin >> a;
	a = islower(a) ? toupper(a) : tolower(a);
	
	cout << a << endl;
}