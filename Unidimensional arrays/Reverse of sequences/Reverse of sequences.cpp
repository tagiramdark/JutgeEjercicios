#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if(n!=0){
		int* data = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> data[i];
		}
	
		for (int i = n-1; i >=1; i--)
		{
			cout << data[i] << ' ';
			
		}
		cout << data[0] << endl;}
		else{
			cout<<endl;
		}
	}
}
