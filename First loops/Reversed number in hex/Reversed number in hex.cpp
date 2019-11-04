#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	string n;
	cin >> n;
	int x;
	istringstream(n) >> x;
	string g;
	char letras[6]{'A', 'B', 'C', 'D', 'E', 'F'};
	char numeros[10]{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	if (x != 0)
	{
		while (x > 0)
		{
			int t = x % 16;
			x = x / 16;
			if (t < 10)
				g += numeros[t];

			else
				g += letras[t - 10];
		}
		cout << g << endl;
	}
	else
	{
		cout << "0" << endl;
	}
}
