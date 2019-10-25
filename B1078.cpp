#include <iostream>
#include <string>

using namespace std;

int main()
{
	char c;
	cin >> c;
	getchar();
	string input;
	getline(cin,input);
	if (c=='C')
	{
		char last;
		int lastcount;
		for (int i=0;i<input.length();i++)
		{
			if (i==0) 
			{
				last = input[i];
				lastcount=0;
				continue;
			}
			if (input[i]==last)
			{
				lastcount++;
			}
			else
			{
				if (lastcount==0)
				{
					cout << last;
				}
				else
				{
					cout << lastcount+1 << last;
				}
				last = input[i];
				lastcount=0;
			}
		}
		if (lastcount==0)
		{
			cout << last;
		}
		else
		{
			cout << lastcount+1 << last;
		}
}
	else if(c=='D')
	{
		for (int i=0;i<input.length();i++)
		{
			if(isdigit(input[i]))
			{
				int k=1;
				string c;
				c+=input[i];
				while(isdigit(input[i+k]))
				{
					c+=input[i+k];
					k++;
				}
				int count = stoi(c);
				for (int j=0;j<count;j++)
				{
					cout << input[i+k];
				}
				i+=k;
			}
			else
			{
				cout << input[i];
			}
		}
	}
}
