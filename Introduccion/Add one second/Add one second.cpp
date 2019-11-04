#include <iostream>
using namespace std;

void imprimir(int valor) {
	if (valor < 10)
		cout << "0";
	cout << valor;
}
int main() {
	int h=0,m=0,s=0;
	cin >> h>>m>>s;
	int seg = (3600 * h) + (60 * m) + s + 1;
	if (seg >= 3600) {
		h = seg / 3600;
		seg -= 3600 * h;
	}
	if (seg >= 60) {
		m = seg / 60;
		seg -= 60 * m;
	}
	else
	{
		m = 0;
	}
	h=h>=24?0:h;
	s = seg;
	imprimir(h);
	cout << ":";
	imprimir(m);
	cout << ":";
	imprimir(s);
	cout << endl;
}