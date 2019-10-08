#include <iostream>
#include <set> 

using namespace std;

int f(float x)
{
	return (int)x;
}
int main()
{
	int n;
	set<int> s;
	cin >> n;
	for (float i=1;i<=n;i++)
	{
		s.insert( f(i/2) + f(i/3) + f(i/5) );
	}
	cout << s.size() << endl;
}
