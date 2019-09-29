#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector<int> a;
	vector<int> b;
	vector<int> ans;
	int temp;
	while(cin>>temp)
	{
		a.push_back(temp);
		cin>>temp;
		b.push_back(temp);
	}
	for (int i=0;i<a.size();i++)
	{
		a[i] *= b[i];
		b[i]--;
		if (a[i]==0&&b[i]!=0) continue;
		if (a[i]==0&&b[i]==0) continue;
		ans.push_back(a[i]);
		ans.push_back(b[i]);
	}
	if (ans.size()==0)
	{
		cout << "0 0" << endl;
		return 0; 
	}
	for (int i=0;i<ans.size();i++)
		if (i==0) 
			cout << ans[i];
		else
			cout << " " << ans[i];
	cout << endl;
}
