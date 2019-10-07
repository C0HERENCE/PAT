#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool c[126-32+1] = {false};
	string a,b;
	getline(cin,a);
	getline(cin,b);
	string str = a+b;
	for (auto ch:str)
	{
		if(c[ch-32]==false)
		{
			cout << ch;
			c[ch-32]=true;
		}
	}
}
