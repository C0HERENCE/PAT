#include <iostream>
#include <string>
#include <map>
using namespace std;
int main ()
{
	string n;
	cin>>n;
	map<char,int> m;
	for (int i=0;i<n.length();i++)
		m[n[i]]++;
	for (auto i:m)
		cout << i.first << ":" << i.second << endl;
	return 0;
} 

