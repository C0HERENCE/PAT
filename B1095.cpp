#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
struct student
{
	string id;
	int score;
	string level;
	string room;
	string date;
	string no;
};
struct dateroom
{
	string room;
	int total;
};
int type;
string command;
bool cmp(student a,student b)
{
	if (a.score==b.score)
		return a.id.compare(b.id)<0;
	else
		return a.score>b.score;
}
int cmp2 (dateroom a,dateroom b)
{
	if (a.total == b.total)
		return a.room.compare(b.room)<0;
	else
		return a.total>b.total;
}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	vector<student> all(n);
	for (int i=0;i<n;i++)
	{
		cin >> all[i].id >> all[i].score;
		all[i].level=all[i].id.substr(0,1);
		all[i].room=all[i].id.substr(1,3);
		all[i].date=all[i].id.substr(4,6);
		all[i].no=all[i].id.substr(10);
	}
	for (int i=0;i<m;i++)
	{
		cin >> type >> command;
		printf("Case %d: %d %s\n",i+1,type,command.c_str());
				vector<student> levels;
				
				vector<student> rooms;
				int totals=0;	
				
				vector<dateroom> vroom;
				unordered_map<string,int> dates;
		switch (type)
		{
			case 1:
				for (auto stu:all)
					if (stu.level==command)
						levels.push_back(stu);
				if (levels.size()==0)
				{
					printf("NA\n");
					break;
				}
				sort(levels.begin(),levels.end(),cmp);
				for (auto stu:levels)
					printf("%s %d\n",stu.id.c_str(),stu.score);
				break;
			case 2:
				for (auto stu:all)
					if (stu.room==command)
						rooms.push_back(stu);
				if (rooms.size()==0)
				{
					printf("NA\n");
					break;
				}
				for (auto stu:rooms)
					totals += stu.score;
				printf("%d %d\n",rooms.size(),totals);
				break;
			case 3:
				for (auto stu:all)
					if (stu.date==command)
						dates[stu.room]++;
				if (dates.size()==0)
				{
					printf("NA\n");
					break;
				}
				for (auto room:dates)
				{
					dateroom r;
					r.room=room.first;
					r.total=room.second;
					vroom.push_back(r);
				}
				sort (vroom.begin(),vroom.end(),cmp2);
				for (auto r:vroom)
					printf("%s %d\n",r.room.c_str(),r.total);
				break;
			default:
				printf("NA\n");
				break;
		}
	}
} 
