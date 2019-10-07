#include <iostream>
#include <string>

using namespace std;

string appearance(string s)
{
	string ret="";
	char last = s[0];
	int lastcount = 0;
	for (int i=0;i<s.length();++i)
	{
		char now = s[i];
		if (now == last)
		{
			lastcount++;
		}
		else
		{
			ret += last + to_string(lastcount);
			last = now;
			lastcount = 1;
		}
		if (i==s.length()-1)
		{
			ret += last + to_string(lastcount);
		}
	}
	return ret;
}
int main()
{
	string s;
	cin >> s;
	int n;
	cin >> n;
	for (int i=0;i<n-1;i++)
	{
		s = appearance(s);
	}
	cout << s << endl;
}
