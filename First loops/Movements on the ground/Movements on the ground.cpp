#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	cin >> n;
	int x=0, y=0;
	for (int i = 0; i < n.length(); i++)
	{
		x += n.at(i) == 'w' ? -1 : n.at(i) == 'e' ? 1 : 0;
		y += n.at(i) == 'n' ? -1 : n.at(i) == 's' ? 1 : 0;
	}
	cout << "("<<x<<", "<<y<<")" << endl;
}
