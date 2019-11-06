#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;
struct student
{
    string id;
    int g1 = 11111;
    int g2 = 11111;
    int g3 = 11111;
};
int main()
{
	int P,M,N;
	cin>>P>>M>>N;
	unordered_map<string,student> m;
	for (int i=0;i<P;i++)
	{
		string xuehao;
		int chengji;
		cin>>xuehao>>chengji;
		student xuesheng;
		xuesheng.id=xuehao;
		xuesheng.g1=chengji;
		m[xuehao]=xuesheng;
	}
	for (int i=0;i<M;i++)
	{
		string xuehao;
		int chengji;
		cin>>xuehao>>chengji;
		student xuesheng;
		xuesheng.id=xuehao;
		xuesheng.g2=chengji;
		if (m.count(xuehao)!=0)
			m[xuehao].g2=chengji;
		else
		{
			m[xuehao]=xuesheng;
			m[xuehao].g1=0;
		}	
	}	
	for (int i=0;i<N;i++)
	{
		string xuehao;
		int chengji;
		cin>>xuehao>>chengji;
		student xuesheng;
		xuesheng.id=xuehao;
		xuesheng.g3=chengji;
		if (m.count(xuehao)!=0)
			m[xuehao].g3=chengji;
		else
		{
			m[xuehao]=xuesheng;
			m[xuehao].g1 = 10;
			m[xuehao].g2 = 10;
		}
	}	
	for (auto s:m)
	{
		float g;
		if (s.second.g3>=s.second.g2)
			g=s.second.g3;
		else
			g=round(s.second.g2*0.4+s.second.g3*0.6);
		if (s.second.g1 == 0)
			s.second.g1 = -10;
		if (s.second.g2 == 0)
			s.second.g2 = -10;
		if (s.second.g3 == 0)
			s.second.g3 = -10;
		if (s.second.g1>=200&&g>60)
			cout<<s.first<<" "<<s.second.g1<<" "<<s.second.g2<<" "<<s.second.g3<<" "<<g<<endl;
	}
	return 0;
} 

