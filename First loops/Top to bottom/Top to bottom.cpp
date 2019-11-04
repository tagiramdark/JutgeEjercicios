#include <iostream>
using namespace std;



int main() {
	int min=0,max=0;
	cin >> min>>max;
	if (min < max) {
		for (int i = max; i >= min; i--)
		{
			cout << i << endl;
		}
	}
	else
	{
		for (int i = min; i >= max; i--)
		{
			cout << i << endl;
		}
	}
}
