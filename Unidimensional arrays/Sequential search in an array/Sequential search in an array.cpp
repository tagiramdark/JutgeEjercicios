#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool exists(int x, const vector<int>& v);
int main()
{
	
}
bool exists(int x, const vector<int>& v) {
	int a = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (x == v[i]) {
			++a;
			break;
		}
	}
	return a > 0;
}