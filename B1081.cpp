#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	getchar();
	for (int i=0;i<n;i++)
	{
		string pwd;
		getline(cin,pwd);
		if(pwd.length()<6)
		{
			cout << "Your password is tai duan le." << endl;
			continue;
		}
		bool tailuanle=false;
		bool shuzi=false;
		bool zimu=false;
		for (auto c:pwd)
		{
			if (isalpha(c))
				zimu=true;
			else if(isdigit(c))
				shuzi=true;
			else if(c!='.')
				tailuanle=true;
		}
		if (tailuanle)
		{
			cout << "Your password is tai luan le." << endl;
		}
		else if(!zimu)
		{
			cout << "Your password needs zi mu." << endl;
		}
		else if(!shuzi)
		{
			cout << "Your password needs shu zi." << endl;
		}
		else
		{
			cout << "Your password is wan mei." << endl;
		}
	}
}
