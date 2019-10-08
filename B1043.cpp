#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	string str;
	cin >> str;
	map<char,int> m;
	for (auto c:str)
	{
		if (c=='P'||c=='A'||c=='T'||c=='e'||c=='s'||c=='t')
		{
			m[c]++;
		}
	}
	while (m['P']>0||m['A']>0||m['T']>0||m['e']>0||m['s']>0||m['t']>0)
	{
		if (m['P']>0)
		{
			cout << 'P';
			m['P']--;
		}
		if (m['A']>0)
		{
			cout << 'A';
			m['A']--;
		}
		if (m['T']>0)
		{
			cout << 'T';
			m['T']--;
		}
		if (m['e']>0)
		{
			cout << 'e';
			m['e']--;
		}
		if (m['s']>0)
		{
			cout << 's';
			m['s']--;
		}
		if (m['t']>0)
		{
			cout << 't';
			m['t']--;
		}
	}
}
