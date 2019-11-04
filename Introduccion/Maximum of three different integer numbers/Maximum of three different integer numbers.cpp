#include <iostream>
using namespace std;

int main()
{
	int result = 0;
	cin >> result;
	for (int i = 0; i < 2; i++)
	{
		int temp=0;
		cin >> temp;
		if (temp > result)
			result = temp;
	}

	cout << result << endl;
	return 0;
}