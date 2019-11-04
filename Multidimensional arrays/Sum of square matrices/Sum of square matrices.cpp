#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matrix;

Matrix sum(const Matrix& a, const Matrix& b);

int main()
{
	
}
Matrix sum(const Matrix& a, const Matrix& b) {
	Matrix resultado(a.size());
	for (int i = 0; i < a.size(); i++)
	{
		resultado[i].resize(a[i].size());
		for (int j = 0; j < a[i].size(); j++)
		{
			resultado[i][j] = a[i][j] + b[i][j];
		}
	}
	return resultado;
}