#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
	vector<string> inputs;
	string input;
	/*
	getline(cin,input);
	
	for(int i=0;i<input.length();i++)
	{
		int end=input.find(" ",i);
		if (end==string::npos)
		{
			inputs.push_back(input.substr(i));
			break;
		}
		else
		{
			inputs.push_back(input.substr(i,end-i));
			i = end;
		}
	}
	*/
	while(cin>>input)
	{
		inputs.push_back(input);
	}
	string ans;
	for(auto it=inputs.rbegin();it!=inputs.rend();++it)
		if(ans.length()==0)
			ans+=*it;
		else
			ans+=" "+*it;
	cout << ans << endl;
	return 0;
} 
