#include <iostream>
#include <string> 

using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		string s;
		cin >> s;
		
		int pcount =0,tcount=0;
		bool isno =false;
		int ppos=0,tpos=0;
		int lacount=0,macount=0,racount=0;
		for (int j=0;j<s.length();j++)
		{
			if(s[j]=='P')
			{
				if(++pcount>1)
				{
					isno = true;
					break;
				}
				ppos=j;
			}
			else if(s[j]=='T')
			{
				if(++tcount>1)
				{
					isno = true;
					break;
				}
				tpos=j;
			}
		} 
		if (isno||!(ppos<tpos))
		{
			cout << "NO" <<endl;
			continue;
		}
		for (int j=0;j<s.length();j++)
		{
			if(s[j]=='A')
			{
				if (j<ppos)
					lacount++;
				if (j>ppos && j<tpos)
					macount++;
				if (j>tpos)
					racount++;
			}
			else if(s[j]!='P'&&s[j]!='T')
			{
				isno = true;
				break; 
			} 
		}
		if(isno||macount==0||(lacount*macount!=racount))
		{
			cout << "NO" <<endl;
			continue;
		}
		cout << "YES" <<endl;
	}
	
	return 0;
}
