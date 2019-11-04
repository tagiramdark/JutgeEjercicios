#include <iostream>
using namespace std;

int main()
{
	int temperarura = 0;
	cin >> temperarura;
	string mensaje,mensajeSecundario;
	mensaje = temperarura < 10 ? "it's cold" :
				temperarura>30 ? "it's hot" :
				"it's ok";
	mensajeSecundario = temperarura >= 100 ? "water would boil" : "water would freeze";
	cout << mensaje << endl;
	if(temperarura>=100||temperarura<=0)
		cout << mensajeSecundario << endl;
	return 0;
}