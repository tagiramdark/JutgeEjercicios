#include <iostream>
using namespace std;

int main()
{
	int min = 0, max = 0;
	cin >> min >> max;
	if (min > max)
	{
		cout<<endl;
	}
	else
	{
		for (int i = min; i <= max; i++)
		{
			if (i == max)
				cout << i << endl;
			else
				cout << i << ",";
		}
	}
}
