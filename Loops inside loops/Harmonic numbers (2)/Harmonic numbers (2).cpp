#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.precision(10);
	int n, m;
	while (cin >> n >> m)
	{
		double sub=0;
		m++;
		while (m<=n)
		{
			sub += (double)1 / m;
			m++;
		}
		cout << sub << endl;
	}
}

