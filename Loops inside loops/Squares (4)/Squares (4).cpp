#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.precision(10);
	int n;
	int i = 0;
	while (cin >> n)
	{
		for (int j = 0; j < n; j++)
		{
			int n1 = 0;
			if (i != 0)
				cout << endl;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << n1;
					n1 = n1 + 1 == 10 ? 0 : n1 + 1;
				}
				cout << endl;
			}
			++i;
		}
	}
}
