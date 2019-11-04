#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	int e;
	cin >> e;
	for (int i = 0; i < e; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
}

