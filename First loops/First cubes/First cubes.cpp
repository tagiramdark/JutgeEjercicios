#include <iostream>
using namespace std;

int main()
{
	int n=0;
	cin >> n ;
	int value=0;
	for (int i = 0; i <= n; i++)
	{
		if (i != n)
			cout << i * i * i << ",";
		else
			cout << i * i * i << endl;
		
	}
}
