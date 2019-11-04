#include <iostream>
#include <string>
#include <numeric>
#include <iomanip>
#include <vector>
using namespace std;

int number_of_digits(int n);

int main()
{
	int n;
	cin >> n;
	cout << number_of_digits(n) << endl;
}
int number_of_digits(int n) {
	string d = to_string(n);
	return d.size();
}