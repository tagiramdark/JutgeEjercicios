#include <iostream>
#include <string>
using namespace std;
string day_of_the_week(int d, int m, int y);
int main() {
	int x,y,z;
	cin >> x>>y>>z;
	cout << day_of_the_week( x,  y,  z) << endl;
}
string day_of_the_week(int d, int m, int y) {
	
	m -= 2;
	if (m<= 0) {
		m += 12;
		y=y-1;
	}
	
	int c = y / 100;
	int a = y % 100;
	int f = (2.6 * m) - 0.2;
	f = f + d + a + (a / 4) + (c / 4) - 2 * c;
	while (f < 0) f += 7;
	f %= 7;	
	return f==0?"Sunday": f == 1 ? "Monday" : f == 2 ? "Tuesday" : f == 3 ? "Wednesday" : f == 4 ? "Thursday" : f == 5 ? "Friday" : "Saturday";
}