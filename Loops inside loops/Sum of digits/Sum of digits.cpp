#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;


int main()
{
	
	string num;
	while (cin >>num)
	{
		int suma = 0;
		for (int i = 0; i < num.length(); i++)
		{
		
			suma +=(int)num[i]-48;
		}
		cout << "The sum of the digits of "<<num<<" is "<<suma << "." << endl;
	}

}

