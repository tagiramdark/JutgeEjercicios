#include <iostream>
using namespace std;
bool is_leap_year(int year);
bool is_valid_date(int d, int m, int y);
int main() {
	int x,y,z;
	cin >> x>>y>>z;
	cout << is_valid_date(x,y,z) << endl;
}
bool is_leap_year(int year) {
	return ((year % 4 == 0) && (year % 100 != 0)) || ((year % 100 == 0) && (year % 400 == 0)) || (year % 400 == 0);
}
bool is_valid_date(int d, int m, int y) {
	bool leap = is_leap_year(y);
	return !(!(y >= 1800 && y <= 9999) || (!leap && d > 28 && m == 2) || (leap && d > 29 && m == 2) || d < 1 || m < 1 || m>12 || d>31 || ((m == 11 || m == 9 || m == 6 || m == 4) && d > 30));
}