#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int x, y;
	while (cin>>x>>y)
	{
		int** mtz = new int*[x];
		for (int i = 0; i < x; i++)
		{
			mtz[i] = new int[y];
			for (int j = 0; j < y; j++)
			{
				cin >> mtz[i][j];
			}
		}
		string command;
		while (cin>>command)
		{
			int a, b;
			if (command == "row") {
				cin >>a ;
				cout << "row " << a << ":";
				for (int i = 0; i < y; i++)
				{
					cout << " " << mtz[a-1][i] ;
				}
				cout << endl;
			}
			if (command == "column") {
				cin >> a;
				cout << "column " << a << ":";
				for (int i = 0; i < x; i++)
				{
					cout << " " << mtz[i][a-1];
				}
				cout << endl;
			}
			if (command == "element") {
				
				cin >> a >> b;
				cout << "element " << a << " " << b << ": " << mtz[a-1][b-1]<<endl;
			}
		}
		

	}
}
