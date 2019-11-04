#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	cout.setf(ios::fixed);
	cout.precision(6);
	double n;
	while (cin >> n)
	{
     double coseno=cos((360-n)*M_PI/180); 
      coseno=coseno<0&&coseno>-0.000000001?0:coseno;
		cout << sin(n*M_PI/180) << " " <<  coseno << endl;

	}
	
}
