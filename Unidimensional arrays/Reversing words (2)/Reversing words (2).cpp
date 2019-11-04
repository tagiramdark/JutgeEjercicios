#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	while (cin>>n)
	{
		string* data = new string[n];
		for (int i = 0; i < n; i++)
		{
			cin >> data[i];
		}
		for (int j = n-1; j >=0; j--)
		{
			for (int i = data[j].size() - 1; i >= 0; i--)
			{
				cout <<data[j][i];
			}
			cout << endl;
		}
		
	}	
}
