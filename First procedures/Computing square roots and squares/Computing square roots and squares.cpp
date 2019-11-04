#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	
	double n;
	while (cin >> n)
	{
		cout.precision(0);
		cout << n * n << " ";
		cout.precision(6);
		cout << sqrt(n) << endl;
	}
	
}
