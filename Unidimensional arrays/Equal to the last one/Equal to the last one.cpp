#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int* data = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> data[i];
		}
		int c = data[n - 1];
		int r = 0;
		for (int i = 0; i < n - 1; i++)
		{
			if (data[i] == c)
				r++;
		}
		cout << r << endl;
	}
}
