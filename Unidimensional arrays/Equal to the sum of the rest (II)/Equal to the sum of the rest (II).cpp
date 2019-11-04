#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int suma = 0;
	int n;
	while (cin >> n)
	{
		suma = 0;
		vector<	int> numeros(n,0);
		vector<	int> sumas(n, 0);
		bool a=false;
		for (int i = 0; i < n; i++)
		{
			cin >> numeros[i];
			suma += numeros[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (numeros[i] == suma - numeros[i]) {
				a = true;
				break;
			}

		}
		cout << (a ? "YES" : "NO") << endl;
	}
}