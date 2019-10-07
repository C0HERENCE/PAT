#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int min=100000,max=-1;
	string idmax,idmin;
	for (int i=0;i<n;i++)
	{
		string id;
		int x,y;
		cin >> id >> x >> y;
		int d=x*x+y*y;
		if (d>max)
		{
			max=d;
			idmax=id;
		}
		if (d<min)
		{
			min=d;
			idmin=id;
		}
	}
	cout << idmin << " " << idmax << endl;
}
