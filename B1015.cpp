#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
struct student
{
	string num;
	int de;
	int cai;
};
bool cmp(student a,student b)
{
	if (a.de+a.cai==b.de+b.cai)
		if (a.de == b.de)
			return a.num.compare(b.num) < 0;
		else
			return a.de > b.de;
	else
		return a.de+a.cai>b.de+b.cai;
}
int main()
{
	int n,l,h;
	cin >> n >> l >> h;
	vector<student> a,b,c,d;
	for (int i=0;i<n;i++)
	{
		student stu;
		cin >> stu.num >> stu.de >> stu.cai;
		if (stu.de <l || stu.cai<l)
			continue;
		if (stu.de >= h && stu.cai >= h)
		{
			a.push_back(stu);
			continue;
		}
		if (stu.de >= h && stu.cai <h)
		{
			b.push_back(stu);
			continue;
		}
		if (stu.de < h && stu.cai < h && stu.de >= stu.cai)
		{
			c.push_back(stu);
			continue;
		}
		d.push_back(stu);
	}
	sort(a.begin(),a.end(),cmp);
	sort(b.begin(),b.end(),cmp);
	sort(c.begin(),c.end(),cmp);
	sort(d.begin(),d.end(),cmp);
	cout << a.size() + b.size() + c.size() + d.size() << endl;
	for (auto i:a)
		cout << i.num << " " << i.de << " " << i.cai << endl;
	for (auto i:b)
		cout << i.num << " " << i.de << " " << i.cai << endl;
	for (auto i:c)
		cout << i.num << " " << i.de << " " << i.cai << endl;
	for (auto i:d)
		cout << i.num << " " << i.de << " " << i.cai << endl;
}
