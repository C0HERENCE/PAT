#include <iostream>
#include <vector>
#include <string>

using namespace std;

void AddCards(vector<string>& cards)
{
	
	for(int i=0;i<13;i++)
	{
		string s ="S"+ to_string(i+1);
		cards.push_back(s);
	}
	for(int i=0;i<13;i++)
	{
		string s ="H"+ to_string(i+1);
		cards.push_back(s);
	}
	for(int i=0;i<13;i++)
	{
		string s ="C"+ to_string(i+1);
		cards.push_back(s);
	}
	for(int i=0;i<13;i++)
	{
		string s ="D"+ to_string(i+1);
		cards.push_back(s);
	}
	cards.push_back("J1");
	cards.push_back("J2");
}
int main()
{
	int k;
	cin >> k;
	vector<int> order;
	for (int i=0;i<54;i++)
	{
		int temp;
		cin >> temp;
		order.push_back(temp);
	}
	vector<string> cards;
	vector<string> ans(54);
	AddCards(cards);
	for(int i=0;i<k;i++)
	{
		for (int j=0;j<54;j++)
			ans[order[j]-1]=cards[j];
		cards=ans;	
	}	
	for (int i=0;i<54;i++)
		if (i==0) 
			cout << cards[i];
		else
			cout << " " << cards[i];
	cout << endl;
} 
