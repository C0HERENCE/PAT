#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> hands;
vector<string> eyes;
vector<string> mouths;
vector<vector<string>> all;
int main()
{
	all.push_back(hands);
	all.push_back(eyes);
	all.push_back(mouths);
	for (int c=0;c<all.size();c++)
	{
		string temp; 
		getline(cin,temp); //输入部位 
		for (int i=0; i<temp.length();i++)
		{
			int start = temp.find('[',i); //找到 从 i 开始的第一个 【 
			int end = temp.find(']',i+1);//找到 从 i+1 开始的第一个 】 
			if (start == -1 || end == -1) continue; //如果没找到就 continue 
			string s = temp.substr(start+1,end-start-1); //如果找到了就substr出中间的东西 
			all[c].push_back(s);//然后把中间的东西放到数组里 
			i = end;//这个很关键，接下来我的下标i直接从end开始了 
		}
	}
	
	int N;
	cin >> N; //输入表情数N 
	for (int i=0;i<N;i++)
	{
		vector<int> inputs;
		vector<string> ans;
		for (int j=0;j<5;j++)
		{
			int temp; cin >> temp; temp--; inputs.push_back(temp);
		}
		bool error = false;
		for (int j=0;j<inputs.size();j++)
		{
			switch (j)
			{
				case 0:
				case 4:
					if(inputs[j] > all[0].size()-1)
						error = true;
					else
						ans.push_back(all[0][inputs[j]]);
					break;
				case 1:
				case 3:
					if(inputs[j] > all[1].size()-1)
						error = true;
					else
						ans.push_back(all[1][inputs[j]]);
					break;
				case 2:
					if(inputs[j] > all[2].size()-1)
						error = true;
					else
						ans.push_back(all[2][inputs[j]]);
					break;
			}
		}
		if (error)
		{
			cout<< R"(Are you kidding me? @\/@)" << endl;
		}
		else
		{
			for (int j=0;j<ans.size();j++)
			{
				string s=ans[j];
				if (j==0)
					s.append("(");
				if (j==3)
					s.append(")");
				cout << s;
			}
			cout << endl;
		}
	}
	
	
	return 0;
} 
