#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct person
{
	string name;
	int height;
};
bool cmp(person a,person b)
{
	if (a.height != b.height)
		return a.height>b.height;
	else
		return a.name.compare(b.name)<0;		
}
int main()
{
	int n,k;
	cin >> n >>k;
	vector<person> p(n);
	for (int i=0;i<n;i++)
		cin >> p[i].name >> p[i].height;
	sort(p.begin(),p.end(),cmp);
	int counts = n/k;
	int remain = n - counts * (k-1);
	
	int mid=remain/2;
	int left = -1;
	vector<person> plast(remain);
	plast[mid]=p[0];
	for(int i=1;i<remain;i++)
	{
		plast[mid+left]=p[i];
		left *= -1;
		if (left < 0) left--;
	}
	for (int i=0;i<remain;i++)
	{
		if(i==0)
			cout << plast[i].name;
		else
			cout << " " << plast[i].name;
	}
	cout << endl;
	for (int i=0;i<k-1;i++)
	{
		int base = remain + i*counts;
		mid = counts/2;
		left = -1;
		vector<person> pline(counts);
		pline[mid]=p[base];
		for(int i=base+1;i< base+counts;i++)
		{
			pline[mid+left]=p[i];
			left *=-1;
			if (left < 0) left--;
		}
		for (int i=0;i<counts;i++)
		{
			if(i==0)
				cout << pline[i].name;
			else
				cout << " " << pline[i].name;
		}
		cout << endl;
	}
}
