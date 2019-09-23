#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class store
{
public:
	int id;
	float sum;
	float total_price;
	float price;	
};
bool cmp(store a,store b)
{
	return a.price>b.price;
}
vector<store> stores;

int main()
{
	float profit=0;
	int N,D;
	cin>>N>>D;
	for(int i=0;i<N;i++)
	{
		store st;
		st.id=i;
		cin>>st.sum;
		stores.push_back(st);
	}
	for(int i=0;i<N;i++)
	{
		cin >> stores[i].total_price;
		stores[i].price=stores[i].total_price/stores[i].sum;
	}
	sort(stores.begin(),stores.end(),cmp);
	int currentD=0;
	for (auto i=stores.begin();i!=stores.end();++i)
	{
		store st = (*i);
		if (currentD+st.sum>=D)
		{
			profit+=(D-currentD)*st.price;
			break;
		}
		else
		{
			profit+=st.total_price;
			currentD+=st.sum;
		}
	}
	printf("%.2f",profit);
	return 0;	
} 
