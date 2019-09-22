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
		getline(cin,temp); //���벿λ 
		for (int i=0; i<temp.length();i++)
		{
			int start = temp.find('[',i); //�ҵ� �� i ��ʼ�ĵ�һ�� �� 
			int end = temp.find(']',i+1);//�ҵ� �� i+1 ��ʼ�ĵ�һ�� �� 
			if (start == -1 || end == -1) continue; //���û�ҵ��� continue 
			string s = temp.substr(start+1,end-start-1); //����ҵ��˾�substr���м�Ķ��� 
			all[c].push_back(s);//Ȼ����м�Ķ����ŵ������� 
			i = end;//����ܹؼ����������ҵ��±�iֱ�Ӵ�end��ʼ�� 
		}
	}
	
	int N;
	cin >> N; //���������N 
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
