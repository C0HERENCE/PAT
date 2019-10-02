#include <iostream>

using namespace std;

struct date
{
	int year;
	int month;
	int day;
	
	bool operator<(date& d2)
	{
		if (d2.year == year)
			if (d2.month == month)
				if (d2.day == day)
					return false;
				else if(d2.day < day)
					return true;
				else
					return false;
			else if (d2.month<month)
				return true;
			else
				return false;
		else if (d2.year < year)
			return true;
		else
			return false;
	}
	
	bool operator==(date& d2)
	{
		if (d2.year == year)
			if (d2.month == month)
				if (d2.day == day)
					return true;
				else
					return false;
			else
				return false;
		else
			return false;
	}
	date operator-(date& d2)
	{
		date d;
		if ((*this)<d2)
			if (day)
	}
};
int main()
{
	int year2014days = 31+28+31+30+31+30+31+31+6;
	int remaindays = 365-year2014days;
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		string name;
		int y,m,d;
		scanf("%s %d/%d/%d",&name,&y,&m,&d);
		if (y<1814 || y>2014) continue;
		int days=0;
		for (int i=y+1;i<2014;i++)
			days+=365;
		if (y==2014)
			break;
		else
			days+=year2014days;
			for 
	}
} 
