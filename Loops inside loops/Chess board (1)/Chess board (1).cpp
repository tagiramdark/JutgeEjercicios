#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	int x, y; int suma = 0;
	cin >> x >> y;

	for (int i = 0; i < x; i++)
	{
		string line;
		cin >> line;
					
		for (int j = 0; j < y; j++)
		{
			suma += (int)line[j] - 48;
		}
		
	}
	cout << suma << endl;
}

