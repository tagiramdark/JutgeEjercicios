#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	getline(cin, n);
	int a=0;
	for (int i = 0; i < n.length(); i++)
	{
		
		if (n.at(i) == 'a')
			++a;
	}
	cout << a << endl;
}
