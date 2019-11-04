#include <iostream>
using namespace std;

int main()
{
	int a =0,b=0;
	cin >> a;
	cin >> b;

	int div = a / b;
	int res = a % b;
	
	cout << div;
	cout << " ";
	cout << res << endl;
	return 0;
}