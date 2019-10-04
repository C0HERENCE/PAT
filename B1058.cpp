#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
struct question
{
	int id;
	int score;
	int count;
	vector<char> correct;
	int wrong;
};
bool cmp(question q1,question q2)
{
	if (q1.wrong == q2.wrong)
		return q1.id<q2.id;
	else
		return q1.wrong > q2.wrong;
}
int main()
{
	int n,m;
	cin >> n >> m;
	string s;
	
	vector<question> q(m);
	for (int i=0;i<m;i++)
	{
		q[i].id=i+1;
		cin >> q[i].score;
		cin >> q[i].count;
		int j;
		cin >> j;
		for (int k=0;k<j;k++)
		{
			char c;
			cin >> c;
			q[i].correct.push_back(c);
		}
	}
	getline(cin,s);
	for (int i=0;i<n;i++)
	{
		string str;
		getline(cin,str);
		int score = 0;
		int num = -1;
		for (int j=0;j<str.length();j++)
		{
			num++;
			int start = str.find("(",j);
			int end = str.find(")",j+1);
			if (start==-1||end==-1)continue;
			string info = str.substr(start+1,end-start-1);
			j=end+1;
			
			int count = info[0]-'0';
			if (count != q[num].correct.size())
			{
				q[num].wrong++;
				continue;
			}
			bool flag = true;
			for (int k=0;k<count;k++)
			{
				if (q[num].correct[k] != info[k*2+2])
				{
					flag = false;
					break;
				}
			}
			if (flag) 
			{
				score+=q[i].score;
			}
			else
			{
				q[num].wrong++;
			}
		}
		cout << score << endl;
	}
	sort(q.begin(),q.end(),cmp);
	int max = q[0].wrong;
	if (max==0)
	{
		cout << "Too simple" << endl;
		return 0;
	}
	cout << max;
	for (auto i:q)
	{
		if(i.wrong==max)
			cout << " " << i.id;
		else
			break;
	}
}
