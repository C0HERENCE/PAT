#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	set<string> forbidden;
	for (int i=0;i<m;i++)
	{
		string input;
		cin >> input;
		forbidden.insert(input);
	}
	int cnt1,cnt2;
	cnt1=cnt2=0;
	for (int i=0;i<n;i++)
	{
		string name;
		cin >> name;
		int k;
		cin >> k;
		string output = "";
		for (int j=0;j<k;j++)
		{
			string item;
			cin >> item;
			if (forbidden.count(item)==1)
			{
				if (output=="") 
				{
					output.append(name+": ");
					cnt1++;
				}
				output.append(item+" ");
				cnt2++;
			}
		}
		if (output!="")
		{
			output.pop_back();
			cout << output << endl;
		}
	}
	cout << cnt1 << " " << cnt2 << endl;
}
