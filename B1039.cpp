#include <iostream>
#include <map>
using namespace std;
map<char,int> sell;
map<char,int> want;
int main()
{
	string inputs;
	cin >> inputs;
	for (auto i:inputs)
		sell[i]++;
	cin >> inputs;
	for (auto i:inputs)
		want[i]++;
	for (auto i:want)
		sell[i.first]-=i.second;
	int shortage=0,remained=0;
	for (auto i:sell)
		if (i.second < 0)
			shortage += i.second * -1;
		else
			remained += i.second;
	if (shortage)
		cout << "NO " << shortage << endl;
	else
		cout << "YES " << remained << endl;
} 
