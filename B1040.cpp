#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;	
	long long pcount=0;
	long long acount=0;
	long long tcount=0;
	for (int i=0;i<str.length();i++)
	if (str[i]=='P')
	{
		pcount++;
	}
	else if(str[i]=='A')
	{
		acount+=pcount;
	}
	else if(str[i]=='T')
	{
		tcount+=acount;
	}
	cout << tcount % 1000000007 << endl;
}
