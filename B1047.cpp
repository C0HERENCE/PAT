#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	map<int,int> m;
	for (int i=0;i<n;i++)
	{
		int num,score,id;
		scanf("%d-%d %d",&num,&id,&score);
		m[num] += score;
	}
	int maxteam=0,maxscore=0;
	for (auto item:m)
	{
		if (item.second > maxscore)
		{
			maxteam=item.first;
			maxscore=item.second;
		}
	}
	cout << maxteam << " " << maxscore << endl;
}
