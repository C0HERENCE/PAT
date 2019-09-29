#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct student
{
	string num;
	int a;
	int b;
};
int searching;
bool isStu(student target)
{
	return target.a==searching;
}
int main()
{
	int n;
	cin >> n;
	vector<student> stu(n);
	for (int i=0;i<n;i++)
		cin >> stu[i].num >> stu[i].a >> stu[i].b;
	int m;cin >> m;
	for (int i=0;i<m;i++)
	{
		cin >> searching;
		auto it = find_if(stu.begin(),stu.end(),isStu);
		cout << it->num << " " << it->b << endl;
	}
}
