#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(cin,str);
	map<char,int> m;
	for (auto c:str)
	{
		if (isalpha(c))
		{
			c = tolower(c);
			m[c]++;
		}
	}
	char maxc;
	int max = 0;
	for (auto item:m)
	{
		if (item.second>max)
		{
			max=item.second;
			maxc=item.first;
		}
	}
	cout << maxc << " " << max << endl;
}
