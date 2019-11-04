#include <iostream>
using namespace std;


int main() {
	int fecha=0;
	cin >> fecha;
	if ((fecha % 4 == 0) && (fecha % 100 != 0))
	{
		cout << "YES"<<endl;
	}
	else if ((fecha % 100 == 0) && (fecha % 400 == 0))
	{
		cout << "YES"<<endl;
	}
	else if (fecha % 400 == 0)
	{
		cout << "YES"<<endl;
	}
	else
	{
		cout << "NO"<<endl;
	}
}