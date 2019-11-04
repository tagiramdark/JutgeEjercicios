#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> concatenation(const vector<int>& v1, const vector<int>& v2);
int main()
{
	
}
vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
	
	vector<int> r = v1;
	for (int i = 0; i < v2.size(); i++)
	{
		r.push_back(v2[i]);
	}
	return r;
}