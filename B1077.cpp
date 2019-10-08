#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;i++)
	{
		int teacher;
		cin >> teacher;
		vector<int> stu;
		for (int j=0;j<n-1;j++)
		{
			int s;
			cin >> s;
			if (s<=m && s>=0)
			{
				stu.push_back(s);
			}
		}
		stu.erase(max_element(stu.begin(),stu.end()));
		stu.erase(min_element(stu.begin(),stu.end()));
		int sum = 0;
		for (auto sc:stu)
			sum+=sc;
		int score = (int)(((teacher + sum*1.0/stu.size())/2)+0.5);
		cout << score << endl;
	}
}
