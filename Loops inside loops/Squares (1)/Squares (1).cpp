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
	int i=0;
	while (cin >> n )
	{
		if(i!=0)
			cout << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << n;
			}
			cout << endl;
		}
		++i;
	}
}

