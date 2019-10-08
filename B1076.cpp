#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		char num=0;
		for (int j=0;j<4;j++)
		{
			string str;
			cin >> str;
			if (str[2]=='T') num=str[0];
		}
		cout << num-'A'+1;
	}
	cout << endl;
}
