#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{  
	string linea;
	 try {
	getline(cin, linea);
	double nums[1000];
	for (int i = 0; i < 1000; i++)
	{
		nums[i] = 0;
	}
	int start = 0, end = 0, index = 0;
	
		if (linea != "0" && !linea.empty()) {
			for (int i = 0; i < linea.length(); i++)
			{
				if (linea.at(i) == ' ') {
					end = i;
					nums[index] = stod(linea.substr(start, end));
					start = end;
					++index;
				}
				if (i == linea.length() - 1) {
					nums[index] = stod(linea.substr(start, i == 0 ? 1 : i + 1));
					++index;
				}
			}
			double suma = 0;
			for (int i = 0; i <= index; i++)
			{
				suma += nums[i];
			}
			suma /= index;
			cout << fixed << setprecision(2) << suma << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}
	catch (exception e) { cout << e.what() << ", " << linea << endl; }



}