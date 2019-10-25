#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	map<int,set<int>> dangers;
	for (int i=0;i<n;i++)
	{
		int a,b;
		cin >> a >> b;
		dangers[a].insert(b);
		dangers[b].insert(a);
	}
	for (int i=0;i<m;i++)
	{
		int count;
		cin >> count;
		set<int> banList;
		bool isNo = false;
		for (int j=0;j<count;j++)
		{
			int item; cin >> item;
			if (banList.count(item)>0)
				isNo = true;
			for (auto k:dangers[item]) 
				banList.insert(k);
		}
		if (isNo) cout << "No" << endl; else cout << "Yes" << endl;
	}
}
