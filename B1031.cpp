#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> weights = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	vector<char> m = {'1','0','X','9','8','7','6','5','4','3','2'};
	int n;
	cin >> n;
	vector<string> wrong;
	getchar();
	for (int i=0;i<n;i++)
	{
		string id;
		getline(cin,id);
		int sum=0;
		bool valid=true;
		for (int j=0;j<id.length()-1;j++)
		{
			if (isdigit(id[j]))
			{
				sum += (id[j]-'0') * weights[j];
			}
			else
			{
				valid=false;
				break;
			}
		}
		if (!valid)
		{
			wrong.push_back(id);
			continue;
		}
		int z=sum%11;
		if (id[id.length()-1]!=m[z])
		{
			wrong.push_back(id);
		}
	}
	if (wrong.size()==0)
		cout << "All passed" << endl;
	else
		for (auto s:wrong)
			cout << s << endl;
}
