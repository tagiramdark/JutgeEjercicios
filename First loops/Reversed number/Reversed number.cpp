#include <iostream>
using namespace std;

int main()
{
	string n;
	cin >> n ;
	for (int i = n.length()-1; i >=0; i--)
	{
		cout << n.at(i);
	}
	cout << endl;
}
