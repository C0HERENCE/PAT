#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


struct stu
{
	string reg_num;
	int score;
	int final_rank;
	int loc_num;
	int loc_rank = 0;
};

bool cmp(stu A,stu B)
{
	if(A.score==B.score)
		return A.reg_num.compare(B.reg_num)<0;
	else
		return A.score > B.score;
}

int main()
{
	int N;
	cin>>N;
	vector<vector<stu>> _all_stu;
	vector<stu> all_stu;
	for(int i=0;i<N;i++)
	{
		int num;
		cin>>num;
		vector<stu> students;
		for(int j=0;j<num;j++)
		{
			string reg_num;
			int score;
			cin >> reg_num >> score;
			stu student;
			student.score=score;
			student.reg_num=reg_num;
			student.loc_num=i+1;
			students.push_back(student);
		}
		_all_stu.push_back(students);
	}
	
		/*
	for(auto i:_all_stu)
		sort(i.begin(),i.end(),cmp);

	for(auto loc_stu=_all_stu.begin();loc_stu!=_all_stu.end();++loc_stu)
	{
		for(auto i=loc_stu.begin();i!=loc_stu.end();++i)
		{
			if(i == loc_stu.begin())
			{
				(*i).loc_rank=1;
				continue;
			}
			if ((*i).score==(*(i-1)).score)
				(*i).loc_rank=(*(i-1)).loc_rank;
			else
				(*i).loc_rank = distance(loc_stu.begin(),i)+1;
		}
		cout << loc_stu[1].loc_rank << endl;
	}
	*/
	for(int j=0;j<_all_stu.size();++j)
	{
		sort(_all_stu[j].begin(),_all_stu[j].end(),cmp);
		for(int i=0;i<_all_stu[j].size();++i)
		{
			if(i == 0)
			{
				_all_stu[j][i].loc_rank=1;
				continue;
			}
			if (_all_stu[j][i].score==_all_stu[j][i-1].score)
				_all_stu[j][i].loc_rank=_all_stu[j][i-1].loc_rank;
			else
				_all_stu[j][i].loc_rank = i+1;
		}
	}

	for(auto loc_stu:_all_stu)
		for(auto i=loc_stu.begin();i!=loc_stu.end();++i)
			all_stu.push_back(*i);
			
	
	sort(all_stu.begin(),all_stu.end(),cmp);
	for(auto i=all_stu.begin();i!=all_stu.end();++i)
	{
		if(i == all_stu.begin())
		{
			(*i).final_rank=1;
			continue;
		}
		if ((*i).score==(*(i-1)).score)
			(*i).final_rank=(*(i-1)).final_rank;
		else
			(*i).final_rank = distance(all_stu.begin(),i)+1;
	}
	
	cout << all_stu.size() << endl;
	for(auto i=all_stu.begin();i!=all_stu.end();++i)
		cout<<(*i).reg_num<<" "<<(*i).final_rank <<" "<< (*i).loc_num <<" "<< (*i).loc_rank <<endl;
} 
