#include <iostream>
using namespace std;
bool is_leap_year(int year);

int main() {
	int fecha = 0;
	cin >> fecha;
	cout << is_leap_year(fecha) << endl;
}
bool is_leap_year(int year) {
	return ((year % 4 == 0) && (year % 100 != 0)) || ((year % 100 == 0) && (year % 400 == 0)) || (year % 400 == 0);
}