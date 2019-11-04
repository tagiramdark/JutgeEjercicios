#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matrix;

bool is_symmetric(const Matrix& m);

int main()
{
	
}


bool is_symmetric(const Matrix& m) {
	
	for (int i = 0; i < m.size(); i++)
	{
		for (int j = 0; j < m[i].size(); j++)
		{
			if (m[i][j] != m[j][i]) {
				return false;
			}
		}
	}
	return true;
}