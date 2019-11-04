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
		if (i % 2==0) {
			for (int j = 0; j < y; j+=2)
			{
				
				suma += (int)line[j] - 48;
			}
		}
		else
		{
			for (int j = 1; j < y; j += 2)
			{
				
				suma += (int)line[j] - 48;
			}
		}
		
	}
	cout << suma << endl;
}
