
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.precision(4);
	vector<double> datos;
	double x;
	double c;
	int i = 0;
	double result = 0;
	cin >> x;

	while (cin >> c) {
		datos.push_back(c);		
	}
	int size = datos.size() - 1;
	for (int i =size; i >=0 ; i--)
	{
		result += datos[i] * pow(x, size-i);
	}
	cout << result << endl;

}