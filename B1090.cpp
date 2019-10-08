#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	map<int,int> ma;
	for (int i=0;i<n;i++)
	{
		int a,b;
		cin >> a >> b;
		ma[a] = b;
		ma[b] = a;
	}
	for (int i=0;i<m;i++)
	{
		int count;
		cin >> count;
		set<int> inputs;
		for (int j=0;j<count;j++)
		{
			int temp;
			cin >> temp;
			inputs.insert(temp);
		}
		bool issafe=true;
		for (auto i:inputs)
		{
			if (ma.count(i)!=0 && inputs.count(ma[i])>0)
			{
				issafe=false;
				break;
			}
		}
		if (issafe)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
}
