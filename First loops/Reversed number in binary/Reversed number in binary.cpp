#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string n;
	cin >> n;
	int x;
	istringstream(n) >> x;
	if (x != 0)
	{
		int a[100] = {0, 0};
		int l = 0;
		for (int i = 0; x > 0; i++)
		{
			a[i] = x % 2;
			x = x / 2;
			++l;
		}

		for (int i = 0; i < l; i++)
		{
			cout << a[i];
		}
		cout << endl;
	}
	else
	{
		cout << "0" << endl;
	}
}
