#include <iostream>
#include <string>
#include <vector>
using namespace std;
double scalar_product(const vector<double>& u, const vector<double>& v);
int main()
{
	
}
double scalar_product(const vector<double>& u, const vector<double>& v) {
	double sum=0;
	for (int i = 0; i < u.size(); i++)
	{
		sum += u[i] * v[i];	
	}
	return sum;
}