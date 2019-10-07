#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main ()
{
	int N;
	cin>>N;
	vector<char> v;
	getchar(); 
	for (int i=0;i<N;i++)
	{
		for (int j=0;j<4;j++)
		{
			string str;
			scanf("%s ",&str);
			if (str.find("T")!=-1)
				v.push_back(str[str.find("T")-2]);
		}
	}
	for (int i=0;i<v.size();i++)
	{
		switch (v[i])
		{
			case 'A':
				cout<<1;
				break;
			case 'B':
				cout<<2;
				break;
			case 'C':
				cout<<3;
				break;
			case 'D':
				cout<<4;
				break;
		}
	}
	return 0;	
} 
