#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int x;
	int suma = 0;
	cin >> x;
	string* lines = new string[x];
	for (int i = 0; i < x; i++)
	{		
		cin >> lines[i];
	}
	for (int i = 0; i < lines->size(); i++)
	{
		int j = lines->size() - 1 - i;
		
		suma +=(int)lines[i][i]-48;
		lines[i][i]='0';		
		suma += (int)lines[j][i]-48;
	}
	cout << suma << endl;
}

