#include <iostream>
#include <string>
#include <cmath>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

class student
{
public:
	
    string id = "";
    int gp = -1;
    int gmd = -1;
    int gfn = -1;
    int g = 0;
    bool isvalid = false;
    void cal()
    {
    	if (gmd > gfn)
            g = round(gmd * 0.4 + gfn * 0.6);
        else
            g = gfn;
        if (g>=60 && gp>=200)
            isvalid=true;
        else
            isvalid=false;
	}
    void print()
    {
        cout << id << " " << gp << " " << gmd << " " << gfn << " " << g << endl;
    }
};

bool cmp(student a,student b)
{
	if (a.g==b.g)
	{
		return a.id.compare(b.id) < 0;
	}
	else
	{
		return a.g > b.g; 
	} 
}

int main()
{
    unordered_map<string,student> all;
    int p,m,n;
    cin >> p >> m >> n; 
    for (int i=0;i<p;i++)
    {
        string id;
        int score;
        cin >> id >> score;
        if (all.count(id)>0)
        {
            all[id].gp=score;
        }
        else
        {
            student stu;
            stu.id=id;
            stu.gp=score;
            all.insert(pair<string,student>(id,stu));
        }
    }
    for (int i=0;i<m;i++)
    {
        string id;
        int score;
        cin >> id >> score;
        if (all.count(id)>0)
        {
            all[id].gmd=score;
        }
        else
        {
            student stu;
            stu.id=id;
            stu.gmd=score;
            all.insert(pair<string,student>(id,stu));
        }
    }
    for (int i=0;i<n;i++)
    {
        string id;
        int score;
        cin >> id >> score;
        if (all.count(id)>0)
        {
            all[id].gfn=score;
        }
        else
        {
            student stu;
            stu.id=id;
            stu.gfn=score;
            all.insert(pair<string,student>(id,stu));
        }
    }
    vector<student> valids;
    for (auto stu:all)
    {
    	stu.second.cal();
    	if (stu.second.isvalid) valids.push_back(stu.second);
    }
    sort(valids.begin(),valids.end(),cmp);
    for (auto stu:valids)
    {
    	stu.print();
	}
}

