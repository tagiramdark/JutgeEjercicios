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

		cout << pow(x, p) << endl;
	}

}

