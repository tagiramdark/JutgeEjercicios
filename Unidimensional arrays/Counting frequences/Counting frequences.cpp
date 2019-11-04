#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int NUM = 1000000000;
int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> data(1001, 0);
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			++data[x- NUM];
						
		}
		for (int i = 0; i < 1001; ++i) {
			if (data[i] != 0) 
				cout << NUM + i << " : " << data[i] << endl;
		}
		

	}
}

