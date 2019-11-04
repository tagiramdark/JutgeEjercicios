#include <iostream>
using namespace std;

void print_line(char c, string s, bool b);

int main() {
	char a;
	cin >> a;
	bool isletter = !(a == '0' || a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7' || a == '8' || a == '9');
	char b = toupper(a);
	bool vowel = b == 'A' || b == 'E' || b == 'I' || b == 'O' || b == 'U';
	print_line(a, "letter", isletter&&!ispunct(a));
	print_line(a, "vowel", vowel);
	print_line(a, "consonant", !vowel&&isletter && !ispunct(a));
	print_line(a, "uppercase", isupper(a));
	print_line(a, "lowercase", islower(a));
	print_line(a, "digit", !isletter);
	cin >> a;
	
}

void print_line(char c, string s, bool b) {
	cout << s << "('" << c << "') = ";
	if (b) cout << "true" << endl;
	else cout << "false" << endl;
}