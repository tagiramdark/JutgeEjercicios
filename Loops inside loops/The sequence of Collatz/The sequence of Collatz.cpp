#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int x;

	
	while (cin >> x)
	{
		int i = 0;
		while (x != 1)
		{
			if (x % 2 == 0)
			{
				x /= 2;
			}
			else
			{
				x *= 3;
				++x;
			}
			++i;
		}
		cout << i << endl;
	}
}

