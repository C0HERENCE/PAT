#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	map<char,bool> m;
	for (auto c:a)
	{
		if (isalpha(c))
		{
			m[toupper(c)]=false;
		}
		else
		{
			m[c]=false;
		}
	}
	for (auto c:b)
		if (isalpha(c))
		{
			m[toupper(c)]=true;
		}
		else
		{
			m[c]=true;
		}
	for (auto c:a)
	{
		if (isalpha(c))
		{
			c=toupper(c);
		}
		if (m[c]==false)
		{
			cout << c;
			m[c] = true;
		}
	}
}
