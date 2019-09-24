#include <iostream>
#include <string>

using namespace std;

int main()
{
	string A,DA,B,DB;
	cin>>A>>DA>>B>>DB;
	int count_DA=0,count_DB=0;
	for(auto c:A)
		if(DA[0]==c) count_DA=count_DA*10+1;
	for(auto c:B)
		if(DB[0]==c) count_DB=count_DB*10+1;
	cout << count_DA * stoi(DA) + count_DB * stoi(DB) << endl;
	
}
