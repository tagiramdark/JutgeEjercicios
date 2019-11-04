#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <math.h>
using namespace std;
bool leapyear(int year) {

	if ((year % 4 == 0) && (year % 100 != 0))
	{
		return true;
	}
	else if ((year % 100 == 0) && (year % 400 == 0))
	{
		return true;
	}
	else if (year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{

	int dia, mes, year;
	while (cin >> dia >> mes >> year)
	{
		bool leap = leapyear(year);
		if (!(year >= 1800 && year <= 9999) || (!leap && dia > 28 && mes == 2) || (leap && dia > 29 && mes == 2) || dia < 1 || mes < 1 || mes>12 || dia>31 || ((mes == 11 || mes == 9 || mes == 6 || mes == 4) && dia > 30))
			cout << "Incorrect Date" << endl;
		else
			cout << "Correct Date" << endl;
	}
}