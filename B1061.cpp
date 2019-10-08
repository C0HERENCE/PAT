#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	vector<int> score(m);
	vector<int> ans(m);
	for (int i=0;i<m;i++)
	{
		cin >> score[i];
	}
	for (int i=0;i<m;i++)
	{
		cin >> ans[i];
	}
	for (int i=0;i<n;i++)
	{
		int sum=0;
		for (int j=0;j<m;j++)
		{
			int input;
			cin >> input;
			if (ans[j]==input)
			{
				sum+=score[j];
			}
		}
		cout << sum << endl;
	}
}
