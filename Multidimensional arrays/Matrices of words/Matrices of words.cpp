#include<stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef vector<string> Row;
typedef vector<Row> Matrix;
int number_of_words(const Matrix &m, char c, int k);
int main()
{
}

int number_of_words(const Matrix &m, char c, int k)
{
	
		
		int rep = 0;
		for (int i = 0; i < m.size(); i++)
		{
			for (int j = 0; j < m[i].size(); j++)
			{
								
					if (k < m[i][j].length() && m[i][j][k] == c)
					{
						++rep;						
					}
				
			}
		}
		return rep;
	
	
}