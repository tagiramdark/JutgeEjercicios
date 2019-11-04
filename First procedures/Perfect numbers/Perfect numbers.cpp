#include <iostream>
#include <string>
using namespace std;
bool is_perfect(int n);
int main() {
	int n;
	cin >> n;
	cout << is_perfect(n) << endl;
}
bool is_perfect(int n) {
	int sum = 0,i=1;
	if (n==0)
		return false;
	while(i<n){
		if (n % i==0) {
			sum += i;
		}
		++i;
	}
	return n == sum;
}