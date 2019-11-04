#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matrix;

void transpose(Matrix& m);

int main()
{
	
}



void transpose(Matrix& m) {
	Matrix e = m;

	int xs = e.size();
	int ys = e[0].size();
	m.resize(ys);
	for (int i = 0; i <ys; i++)
	{		
		m[i].resize(xs);
		for (int j = 0; j <xs; j++)
		{
			
			m[i][j] = e[j][i];
		}
	}
}