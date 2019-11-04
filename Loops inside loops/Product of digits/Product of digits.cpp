#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	
	string n;
	while (cin >> n)
	{
		do {
			int r = 1;
			for (int i = 0; i < n.length(); i++)
			{
				r *= (int)n[i] - 48;
			}
			cout << "The product of the digits of "<<n<<" is "<<r<<"." << endl;
			n = to_string(r);
		} while (n.length()!=1);
		cout << "----------" << endl;

	}
	
}
