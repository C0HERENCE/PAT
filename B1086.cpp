#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	int temp=a*b;
	string ans;
	while (temp)
	{
		ans+=to_string(temp%10);
		temp/=10;
	}
	if (ans=="")
	{
		cout << "0";
	}
	else
	{
		cout << stoi(ans);
	}
} 
