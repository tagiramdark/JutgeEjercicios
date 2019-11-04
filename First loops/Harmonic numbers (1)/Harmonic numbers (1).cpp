#include <iostream>
#include <iomanip> 
using namespace std;



int main() {
	int n;
	cin>>n;
	double value=0;
	for (int i = 1; i <=n; i++)
	{		
		double v = 1;
		value += v / i;
	}

	cout <<fixed<<setprecision(4)<< value << endl;
}
