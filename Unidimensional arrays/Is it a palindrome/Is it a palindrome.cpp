#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool is_palindrome(const string& s);
int main()
{
	string s;
	while (cin>>s)
	{
		cout << is_palindrome(s)<<endl;
	}
}
bool is_palindrome(const string& s) {
	
	 unsigned long size = s.size();
  	if (size == 1) return true;
  	for (unsigned long i = size-1; i >= size/2; --i){
    	if (s[i] != s[size-1-i]) return false;
 	}
 	 return true;
	
}
