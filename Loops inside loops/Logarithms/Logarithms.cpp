#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;


int main()
{
	cout.setf(ios::fixed);
	cout.precision(0);
	int x, p;
	while (cin >> x >> p)
	{
		int i = 0, aux = 1;
		while (aux*x<=p)
		{
			aux *= x;
				++i;
		}
		cout << i << endl;
	}

}

