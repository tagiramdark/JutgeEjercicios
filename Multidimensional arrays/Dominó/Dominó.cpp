#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector< vector<string> > Matrix;

int main()
{
	int Partidas;
	while (cin>>Partidas)
	{
		Matrix p(Partidas);
		for (int i = 0; i < Partidas; i++)
		{
			p[i].resize(10);
			for (int j = 0; j < 10; j++)
			{
				cin >> p[i][j];
			}
		}
		vector<char> w(Partidas,'=');
		for (int i = 0; i < Partidas; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (j != 9) {
					string p1 = p[i][j];
					string p2 = p[i][j + 1];					
					if (p1[p1.length() - 1] != p2[0]) {
						w[i] = j % 2 == 0 ? 'A' : 'B';
						break;
					}
				}				
			}
		}
		for (int i = 0; i < Partidas; i++)
		{
			cout << w[i] << endl;
		}
	}
}

