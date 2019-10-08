#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	vector<int> counts(n);
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			int count;
			cin >> count;
			counts[j]+=count;
		}
	}
	int max = 0;
	vector<int> maxmoons;
	for (int i=0;i<n;i++)
	{
		if (counts[i]>max)
		{
			maxmoons.clear();
			max=counts[i];
			maxmoons.push_back(i);
		}
		else if (counts[i] == max)
		{
			maxmoons.push_back(i);
		}
	}
	cout << max << endl;
	for (auto i=maxmoons.begin();i!=maxmoons.end();++i)
	{
		if (i==maxmoons.begin())
		{
			cout << *i +1;
		}
		else
		{
			cout << " " << *i  + 1;
		}
	}
	cout << endl;
}
