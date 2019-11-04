#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int x, y;
	while (cin>>x)
	{
		
		vector<long> sumaH(x, 0);
		vector<long>sumaV(x, 0);
		long dH = 0, dV=0;
		long r = x * (x*x + 1) / 2;
	
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < x; j++)
			{
				int t;
				cin >> t;
				sumaH[i] += t;
				sumaV[j] += t;
				dH += i == j ? t : 0;
				dV += (x - 1 - i == j) ? t : 0;
			}
			
		}
		
		bool a = false;
		a = dH != r || dV != r;
		if (!a) {
			for (int i = 0; i < x; i++)
			{
				if (sumaH[i] != r) {
					a = true;
					break;
				}
				if (sumaV[i] != r) {
					a = true;
					break;
				}
			}
		}	
			
		cout << (a ? "no" : "si") << endl;

	}

}
