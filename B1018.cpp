#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<char,int> a,pair<char,int> b)
{
	if (a.second!=b.second)
		return a.second>b.second;
	else
		return a.first<b.first;
}
int main()
{
	int n;
	cin >> n;
	map<char,int> wa;
	map<char,int> wb;
	int x=0,y=0,z=0;
	for (int i=0;i<n;i++)
	{
		char a,b;
		cin>>a>>b;
		if(a==b)
		{
			y++;
		}
		else if((a=='C'&&b=='J')||(a=='J'&&b=='B')||(a=='B'&&b=='C'))
		{
			x++;
			wa[a]++;
		}
		else if((a=='J'&&b=='C')||(a=='B'&&b=='J')||(a=='C'&&b=='B'))
		{
			z++;
			wb[b]++;
		}
	}
	vector<pair<char,int>> v1;
	vector<pair<char,int>> v2;
	for(auto i=wa.begin();i!=wa.end();i++)
		v1.push_back(*i);
	for(auto i=wb.begin();i!=wb.end();i++)
		v2.push_back(*i);
	sort(v1.begin(),v1.end(),cmp);
	sort(v2.begin(),v2.end(),cmp);
	cout << x << " " << y << " " << z << endl;
	cout << z << " " << y << " " << x << endl;
	if(v1.size()==0) cout << 'B' << " "; else cout << v1.front().first << " ";
	if(v2.size()==0) cout << 'B' << endl; else cout << v2.front().first << endl;
}
