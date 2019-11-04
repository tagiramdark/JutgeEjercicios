#include <iostream>
using namespace std;

int main()
{
	int n=0;
	cin >> n ;
	int value=0;
	for (int i = 1; i <= n; i++)
	{
		value += i * i;
	}
	cout << value << endl;
}
