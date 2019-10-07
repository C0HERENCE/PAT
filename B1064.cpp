#include <iostream>
#include <set>

using namespace std;

int main()
{
	int n;
	cin >> n;
	set<int> s;
	for (int i=0;i<n;i++)
	{
		int num,sum=0;
		cin >> num;
		while (num)
		{
			sum+=num%10;
			num/=10;
		}
		s.insert(sum);
	}
	cout << s.size() << endl;
	for (auto i=s.begin();i!=s.end();++i)
	{
		if (i==s.begin())
			cout << *i;
		else
			cout << " " << *i;
	}
	cout << endl;
}
