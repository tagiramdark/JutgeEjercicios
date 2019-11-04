#include <iostream>
using namespace std;

int main() {
	string a,b;	
	cin >> a>>b;
	char r = a == b ? '=' :
		a > b ? '>' : '<';
	
	
	cout << a<<" "<<r<<" "<<b << endl;
}