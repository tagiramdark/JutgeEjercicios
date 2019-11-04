#include <iostream>
#include <string>
#include <numeric>
#include <iomanip>
#include <vector>
using namespace std;

bool is_palindromic(int n);
string reversep(string a);
int main()
{
	int n;
	cin >> n;
	cout << is_palindromic(n) << endl;
}
bool is_palindromic(int n) {
	if (n > 9) {
		string numero = to_string(n);
		if (numero.size() % 2 == 0) {
			int medio = (numero.size() / 2);
			string a = numero.substr(0, medio);
			string b = numero.substr(medio, numero.size() - 1);
			b = reversep(b);
			return a == b;
		}
		else
		{
			int medio = (numero.size() / 2);
			string a = numero.substr(0, medio);
			string b = numero.substr(medio + 1, numero.size() - 1);
			b = reversep(b);
			return a == b;
		}
	}
	else {
		return true;
	}


}
string reversep(string a) {
	string b=a;
	for (int i = 0; i < a.size(); i++)
	{
		b[i] = a[a.size() - 1 - i];
	}
	return b;
}