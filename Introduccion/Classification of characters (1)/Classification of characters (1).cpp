#include <iostream>
using namespace std;

int main() {
	char a;
	string msj0, msj1;
	cin >> a;
	msj0 = islower(a) ? "lowercase" :"uppercase";
	char lower = tolower(a);
	msj1 = (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')?"vowel":"consonant";
	cout << msj0<<endl<<msj1 << endl;
}