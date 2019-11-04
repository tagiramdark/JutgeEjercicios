#include <iostream>
using namespace std;

int max4(int a, int b, int c, int d);

int max2(int a, int b);
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << max4(a, b, c, d) << endl;
}
int max4(int a, int b, int c, int d) {
	int x = max2(a, b), y = max2(c, d);
	return max2(x, y);

}
int max2(int a, int b) {
	return a > b ? a : b;
}