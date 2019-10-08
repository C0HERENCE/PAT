#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
	map<int,int> couples;
	set<int> s;
	set<int> singles;
	
	int n;
	int m;
	scanf("%d",&n);
	for (int i=0;i<n;++i)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		couples[a]=b;
		couples[b]=a;
	}
	scanf("%d",&m);
	for (int i=0;i<m;i++)
	{
		int temp;
		scanf("%d",&temp);
		s.insert(temp);
	}
	for (auto i:s)
	{
		if (couples.count(i)==0||s.count(couples[i])==0)
		{
			singles.insert(i);
		}
	}
	cout << singles.size() << endl;
	if (singles.size()!=0)
	{
		for (auto i=singles.begin();i!=singles.end();++i)
		{
			if (i==singles.begin())
				printf("%05d",*i);
			else
				printf(" %05d",*i);
		}
		printf("\n");
	}
}
