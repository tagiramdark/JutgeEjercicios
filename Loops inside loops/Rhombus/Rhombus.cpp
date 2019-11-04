#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	int e;
	cin >> e;
	for (int i = 1; i <= e; i++)
	{
		
		for (int j = 0; j<e-i ; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < 2*i-1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = e-1; i > 0; i--)
	{

		for (int j = 0; j < e - i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < 2 * i - 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

