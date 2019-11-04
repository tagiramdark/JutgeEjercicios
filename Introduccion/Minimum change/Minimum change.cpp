#include <iostream>
using namespace std;


int main() {
	int pesos, centavos;
	cin >> pesos >> centavos;
	int entero[9]{ 500,200,100,50,20,10,5,2,1 };	
	int decimales[6]{ 50,20,10,5,2,1 };
	for (int i = 0; i < 7; i++)
	{
		int cantidad = 0;
		if (pesos >= entero[i]) {
			cantidad = pesos / entero[i];
			pesos -= cantidad * entero[i];
		}
		cout << "Banknotes of " << entero[i] << " euros: " << cantidad << endl;
	}
	for (int i = 7; i < 9; i++)
	{
		int cantidad = 0;
		if (pesos >= entero[i]) {
			cantidad = pesos / entero[i];
			pesos -= cantidad * entero[i];
		}
		string p = i == 8 ? " euro: " : " euros: ";
		cout << "Coins of " << entero[i] << p << cantidad << endl;
	}
	for (int i = 0; i < 6; i++)
	{
		int cantidad = 0;
		if (centavos >= decimales[i]) {
			cantidad = centavos / decimales[i];
			centavos -= cantidad * decimales[i];
		}
		string p = i == 5 ? " cent: " : " cents: ";
		cout << "Coins of " << decimales[i] << p << cantidad << endl;
	}
}